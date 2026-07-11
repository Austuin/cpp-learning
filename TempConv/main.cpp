#include <iostream>
#include <vector>

int main()
{
	const int TempLimit{ 7 };
	bool UserInput{ false };
	int Temp{ 0 };
	int CurrIndex{ 0 };
	std::vector<double> TempList;
	int position = 1;
	bool exitProgram = false;
	while (!UserInput)
	{
		
		std::cout << "Enter a temperature in Fahrenheit: ";
		try
		{
			
			if (CurrIndex < TempLimit)
			{
				std::cin >> Temp;
				if (std::cin.fail())
				{
					throw std::invalid_argument("Invalid input. Please enter a valid temperature.");
				}
				TempList.push_back(Temp);
				CurrIndex++;
			}

			else
			{
				std::cout << "Temperature limit reached. Cannot add more temperatures." << std::endl;
				UserInput = true;
			}
			
		}
		catch (const std::exception& e)
		{
			std::cout << "Invalid input. Please enter a valid temperature." << std::endl;
			std::cin.clear(); // Clear the error flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid inputTempList[CuurIndex] = Temp;
		}
	}
	for (int i = 0; i < TempList.size(); i++)
	{
		std::cin.clear();
		double celsius = (TempList[i] - 32) *5 / 9;
		std::cout << "Tempature" << position << ": " << TempList[i] << " is " << celsius << " in celsius." << std::endl;
		position++;
	}
	return 0;
}
