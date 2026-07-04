#include <iostream>
#include <string>
#include <iomanip>

int main() 
{
	std::cout << std::fixed << std::setprecision(2); // Set the output to fixed-point notation with 2 decimal places
	std::cout << "Welcome to the Tip Calculator!" << std::endl;
	std::string FullName = "James Isac Newtron";
	std::cout << "Please enter your full name: ";
	std::getline(std::cin, FullName);
	std::cout << "Hello, " << FullName << ". Please enter the bill amount: ";
	double BillAmount;
	double TotalBill = 0;
	std::cin >> BillAmount;
	std::cout << "You entered: $" << BillAmount << std::endl;
	std::cout << "Please enter the tip percentage (e.g., 15 for 15%): ";
	int TipPercentage;
	std::cin >> TipPercentage;
	double convertedTipPercentage = TipPercentage / 100.0;
	double TippedAmount = BillAmount * convertedTipPercentage;
	TotalBill = BillAmount * (1 + convertedTipPercentage);
	std::cout << "You entered: " << TipPercentage << "%, is this correct? That is a tip of $" << (TippedAmount) << " bringing your total to $" << (TotalBill) << std::endl;
	char confirmation;
	std::cout << "Enter 'y' for yes or 'n' for no: ";
	std::cin >> confirmation;
	if (confirmation == 'n' || confirmation == 'N')
	{
		confirmation = false;
	}
	else if (confirmation == 'y' || confirmation == 'Y')
	{
		confirmation = true;
	}
	else
	{
		std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
		return 1;
	}

	while (confirmation == false)
	{
		std::cout << "Please enter the tip percentage (e.g., 15 for 15%): ";
		std::cin >> TipPercentage;
		double convertedTipPercentage = TipPercentage / 100.0;
		TippedAmount = BillAmount * convertedTipPercentage;
		TotalBill = BillAmount * (1 + convertedTipPercentage);

		std::cout << "You entered: " << TipPercentage << "%, is this correct? That is a tip of $" << (TippedAmount) << " bringing your total to $" << (TotalBill) << std::endl;
		std::cout << "Enter 'y' for yes or 'n' for no: ";
		std::cin >> confirmation;
		if (confirmation == 'n' || confirmation == 'N')
		{
			confirmation = false;
		}
		else if (confirmation == 'y' || confirmation == 'Y')
		{
			confirmation = true;
		}
		else
		{
			std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
			return 1;
		}
		
	}
	std::cout << "Thank you for confirming the tip percentage of " << (TipPercentage) << "%" << std::endl;
	std::cout << "Thank you " << FullName << " for using the tip calculator! Your total bill amount is: $" << (TotalBill) << "." << std::endl;
	return 0;
}