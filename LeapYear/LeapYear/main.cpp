#include <iostream>








int main() {
	int StartYear, EndYear, CurrentYear, NumOfYears;
	std::cout << "Enter the start year: ";
	std::cin >> StartYear;
	std::cout << "Enter the end year: ";
	std::cin >> EndYear;
	NumOfYears = EndYear - StartYear + 1;
	CurrentYear = StartYear;
	for (int i = 0; i < NumOfYears; i++)
	{
		if (CurrentYear % 4 == 0)
		{
			if (CurrentYear % 100 == 0) {
				if (CurrentYear % 400 == 0)
				{
					std::cout << CurrentYear << " is a leap year." << std::endl;
				}
				else
				{
					std::cout << CurrentYear << " is not a leap year." << std::endl;
				}
			}
			else
			{
				std::cout << CurrentYear << " is a leap year." << std::endl;
			}
		}
		else 
		{
			std::cout << CurrentYear << " is not a leap year." << std::endl;

		}
		CurrentYear++;

	}
}