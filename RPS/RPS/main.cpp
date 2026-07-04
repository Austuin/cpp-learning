#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>






int main() 
{
	char playerChoice, computerChoice, toUpper;
	int playerScore{ 0 }, computerScore{ 0 }, rounds{ 0 }, bestOf{ 0 };
	bool settingsDone = false, gameOver = false, playerChoiceFinished = false;
	srand(time(nullptr));
	std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;


	while(!settingsDone)
	{
		std::cout << "SETTINGS" << std::endl;
		std::cout << "===========================" << std::endl;
		try
		{
			std::cout << "Enter the number of rounds (best of): ";
			std::cin >> bestOf;
			if (bestOf <= 0 || bestOf % 2 == 0)
			{
				throw std::invalid_argument("Please enter a positive odd number.");
			}
			else
			{
				settingsDone = true;
			}
			
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << "You have chosen to play best of " << bestOf << " rounds." << std::endl;
	std::cout << "May the best player win!" << std::endl;
	std::cout << "===========================" << std::endl;
	while (!gameOver) 
	{
		if (rounds >= bestOf)
		{
			gameOver = true;
			break;
		}
		else if (playerScore > bestOf /2 || computerScore > bestOf /2)
		{
			std::cout << "Final Scores:" << std::endl;
			std::cout << "Player Score: " << playerScore << " | Computer Score: " << computerScore << std::endl;
			if (playerScore > computerScore)
			{
				std::cout << "Congratulations! You won the game!" << std::endl;
			}
			else
			{
				std::cout << "Computer won the game! Better luck next time!" << std::endl;
			}
			gameOver = true;
			break;
		}
		else
		{
			std::cout << "Round " << rounds + 1 << std::endl;
			std::cout << "Player Score: " << playerScore << " | Computer Score: " << computerScore << std::endl;
			std::cout << "===========================" << std::endl;
			std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
			while (!playerChoiceFinished)
			{
				try
				{
					std::cin >> playerChoice;
					playerChoice = std::toupper(playerChoice);
					

					if (playerChoice != 'R' && playerChoice != 'P' && playerChoice != 'S')
					{
						throw std::invalid_argument("Invalid choice. Please enter R, P, or S.");

					}
					else
					{
						switch (playerChoice)
						{
						case 'R':
						
							std::cout << "You chose Rock." << std::endl;
							playerChoiceFinished = true;
							break;
						case 'P':
						
							std::cout << "You chose Paper." << std::endl;
							playerChoiceFinished = true;
							break;
						case 'S':
						
							std::cout << "You chose Scissors." << std::endl;
							playerChoiceFinished = true;
							break;

						default:
							break;
						}
					}
				}
				catch (const std::invalid_argument& e)
				{
					std::cout << "Error: " << e.what() << std::endl;
					std::cout << "Please enter your choice again (R for Rock, P for Paper, S for Scissors): ";
				}
			}
			computerChoice = rand() % 3;
			switch (computerChoice)
			{
			case 0:
				computerChoice = 'R';
				std::cout << "Computer chose Rock." << std::endl;
				break;
			case 1:
				computerChoice = 'P';
				std::cout << "Computer chose Paper." << std::endl;
				break;
			case 2:
				computerChoice = 'S';
				std::cout << "Computer chose Scissors." << std::endl;
				break;
			default:
				break;
			}

			if (playerChoice == computerChoice)
			{
				std::cout << "It's a tie!" << std::endl;
				playerChoiceFinished = false;
				continue;
			}
			else if ((playerChoice == 'R' && computerChoice == 'S') ||
				(playerChoice == 'P' && computerChoice == 'R') ||
				(playerChoice == 'S' && computerChoice == 'P'))
			{
				std::cout << "You win this round!" << std::endl;
				playerScore++;
			}
			else
			{
				std::cout << "Computer wins this round!" << std::endl;
				computerScore++;
			}
			rounds++;
			playerChoiceFinished = false;
		}
	
	}
	
}