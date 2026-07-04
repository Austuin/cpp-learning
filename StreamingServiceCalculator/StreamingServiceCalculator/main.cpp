#include <iostream>








int main() {
	std::cout << "Welcome to the Streaming Service Calculator!" << std::endl;
	double totalCost = 0.0;
	double currentCost = 0.0;
	char packager = ' ';
	int allowedDevices = 0;
	int devices = 0;
	double deviceCost = 0.0;

	bool program = true;
	bool packagerSelected = false;
	bool devicesSelected = false;
	while (program)
	{
		while (!packagerSelected) {
			std::cout << "Please select your packager A, B, or C: " << std::endl;
			try {
				std::cin >> packager;
				switch(packager)
				{
				case 'A':
				case 'a':
					currentCost = 9;
					allowedDevices = 1;
					deviceCost = 6.0;
					packagerSelected = true;
					break;
				case 'B':
				case 'b':
					currentCost = 14.0;
					allowedDevices = 3;
					deviceCost = 4;
					packagerSelected = true;
					break;
				case 'C':
				case 'c':
					currentCost = 20.0;
					allowedDevices = 5;
					deviceCost = 2;
					packagerSelected = true;
					break;
				default:
					continue;
				}
			}
			catch (const std::exception& e) {
				std::cerr << "Error: Invalid option." << e.what() << std::endl;
				continue;
			}

		}
		std::cout << "You have selected package " << packager << " with a cost of $" << currentCost << std::endl;
		while (!devicesSelected) {
			std::cout << "Please enter the number of devices you used this month: " << std::endl;
			std::cout << "On your plan, you will be charged $" << deviceCost << " per device." << std::endl;

			try {
				std::cin >> devices;

				// Check if stream entered a fail state (e.g., user typed a letter instead of a number)
				if (std::cin.fail()) {
					std::cin.clear(); // Clear the error flag
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
					throw std::invalid_argument("Invalid input. Please enter a valid number of devices.");
				}

				if (devices < 0) {
					throw std::invalid_argument("Number of devices cannot be negative.");
				}
				else {
					devicesSelected = true;
				}
			}
			catch (const std::exception& e) {
				std::cerr << "Error: " << e.what() << std::endl;
				continue;
			}
		}
		std::cout << "You have used " << devices << " devices this month." << std::endl;
		std::cout << "Summarizing your charges. Plan: " << packager << " Devices: " << devices << std::endl;
		std::cout << "============================================================" << std::endl;
		std::cout << "Base Cost for the plan is $" << currentCost << "/m with " << allowedDevices << " alloted devices." << std::endl;
		std::cout << "You have used " << devices << " devices this month." << std::endl;
		if (devices > allowedDevices) {
			std::cout << "You used " << (devices - allowedDevices) << " more devices than your plan allows." << std::endl;
		}
		std::cout << "Your total cost for this month is $" << (currentCost + (deviceCost * devices)) << std::endl;
		std::cout << "Thank you for using the Streaming Service!" << std::endl;
		std::cout << "============================================================" << std::endl;
		program = false;
	}
	return 0;
}