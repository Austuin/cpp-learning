#include <iostream>
#include <vector>
#include <limits>

/*
*  I used recursion instead of checking the 8 possible win conditions to practice recursion, not to be optimal.
*/




bool Running = true;
bool Player1 = true;
bool player2 = true;
int player1Win = 0;
int player2Win = 0;
char player1char = 'X';
char player2char = 'O';
bool IsSame(char x, char y);
void PrintBoard();
void traverse();
void traverseL(int x, int y);
void traverseR(int x, int y);
void traverseU(int x, int y);
void traverseD(int x, int y);
void traverseDiUp(int x, int y);
void traverseDiDo(int x, int y);
void Tally(char playerchar);
void ResetTally(char playerchar);

int inputx{ 0 };
int inputy{ 0 };


std::vector<std::vector<char>> Board(3, std::vector<char>(3, ' '));

int main()
{
	std::cout << std::boolalpha;

	std::cout << "Welcome to tic tac toe!!!" << std::endl;
	std::cout << "Player X goes first." << std::endl;
	while (Running) {
		PrintBoard();
			while (Player1)
			{
				std::cout << "Player X please select a x position: ";

				while (!(std::cin >> inputx))
				{
					std::cout << "Please enter a valid position.";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				std::cout << "\nPlease select a y postion: ";
				while (!(std::cin >> inputy))
				{
					std::cout << "Please enter a valid position.";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				if (inputx < 3 && inputx >= 0 && inputy < 3 && inputy >= 0 && Board[inputx][inputy] == ' ')
				{
					Board[inputx][inputy] = player1char;
					Player1 = false;
					player2 = true;
				}
				else
				{
					std::cout << "Please select a valid poition.";
				}
			}
			traverse();
			if (player1Win == 3 || player2Win == 3)
			{
				Running = false;
				break;
			}
			PrintBoard();
			while (player2)
			{
				std::cout << "Player Y please select a x position: ";

				while (!(std::cin >> inputx))
				{
					std::cout << "Please enter a valid position.";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				std::cout << "\nPlease select a y postion: ";
				while (!(std::cin >> inputy))
				{
					std::cout << "Please enter a valid position.";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				if (inputx < 3 && inputx >= 0 && inputy < 3 && inputy >= 0 && Board[inputx][inputy] == ' ')
				{
					Board[inputx][inputy] = player2char;
					player2 = false;
					Player1 = true;
				}
				else
				{
					std::cout << "Please select a valid poition.";
				}
			}
			PrintBoard();
			traverse();
			if (player1Win == 3 || player2Win == 3)
			{
				Running = false;
			}
	}
	if (player1Win == 3)
	{
		std::cout << "Player X wins, better luck next time player y.";
	}
	else
	{
		std::cout << "Player Y wins, better luck next time player x.";
	}
}

bool IsSame(char x, char y)
{
	if (x == y)
	{
		return true;
	}
	return false;
}

void PrintBoard()
{
	std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << std::endl;
}

void traverse()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			player1Win = 0;
			player2Win = 0;
			if (Board[i][j] == ' ')
			{
				continue;
			}
			else if (j + 1 < 3 && IsSame(Board[i][j], Board[i][j + 1])) {
				traverseL(i, j);
			}
			else if (j - 1 >= 0 && IsSame(Board[i][j], Board[i][j - 1])) {
				traverseR(i, j);
			}
			else if (i - 1 >= 0 && IsSame(Board[i][j], Board[i - 1][j])) {
				traverseU(i, j);
			}
			else if (i + 1 < 3 && IsSame(Board[i][j], Board[i + 1][j])) {
				traverseD(i, j);
			}
			else if (i - 1 >= 0 && j + 1 < 3 && IsSame(Board[i][j], Board[i - 1][j + 1])) {
				traverseDiUp(i, j);
			}
			else if (i + 1 < 3 && j + 1 < 3 && IsSame(Board[i][j], Board[i + 1][j + 1])) {
				traverseDiDo(i, j);
			}
			if (player1Win == 3 || player2Win == 3)
			{
				Running = false;
				return;
			}
		}
	}
}

void traverseL(int x, int y)
{
	Tally(Board[x][y]);
	std::cout << "Trav L"<< player1Win <<" | " << player2Win << std::endl;
	if (y < 2)
	{
		if (IsSame(Board[x][y], Board[x][y + 1])) {
			traverseL(x, y + 1);
			return;
		}
		else
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}
void traverseR(int x, int y) 
{

	Tally(Board[x][y]);
	std::cout << "Trav R" << player1Win << " | " << player2Win << std::endl;
	if (y > 0)
	{
		if (IsSame(Board[x][y], Board[x][y - 1])) {
			traverseR(x, y - 1);
			return;
		}
		else 
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}
void traverseU(int x, int y)
{
	Tally(Board[x][y]);
	std::cout << "Trav U" << player1Win << " | " << player2Win << std::endl;
	if (x > 0)
	{
		if (IsSame(Board[x][y], Board[x - 1][y])) {
			traverseU(x - 1, y);
			return;
		}
		else
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}
void traverseD(int x, int y)
{
	
	Tally(Board[x][y]);
	std::cout << "Trav D" << player1Win << " | " << player2Win << std::endl;
	if (x < 2)
	{
		if (IsSame(Board[x][y], Board[x + 1][y])) {
			traverseD(x + 1, y);
			return;
		}
		else
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}
void traverseDiUp(int x, int y)
{
	Tally(Board[x][y]);
	std::cout << "Trav DiUp" << player1Win << " | " << player2Win << std::endl;
	if (x > 0 && y < 2)
	{
		if (IsSame(Board[x][y], Board[x - 1][y + 1])) {
			traverseDiUp(x - 1, y + 1);
			return;
		}
		else
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}
void traverseDiDo(int x, int y)
{
	Tally(Board[x][y]);
	std::cout << "Trav DiDo" << player1Win << " | " << player2Win << std::endl;
	
	if (x < 2 && y < 2)
	{
		if (IsSame(Board[x][y], Board[x + 1][y + 1])) {
			traverseDiDo(x + 1, y + 1);
			return;
		}
		else
		{
			ResetTally(Board[x][y]);
		}
	}
	else
	{
		return;
	}
}

void Tally(char playerchar)
{
	if (playerchar == 'X')
	{
		player1Win++;
	}
	else
	{
		player2Win++;
	}
	if (player1Win == 3 || player2Win == 3) {
		Running = false;
	}
}

void ResetTally(char playerchar )
{
	if (playerchar == 'X')
	{
		player1Win = 0;
	}
	else
	{
		player2Win = 0;
	}
}