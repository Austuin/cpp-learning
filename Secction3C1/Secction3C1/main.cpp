#include <iostream>






int main() {
	int age{ 0 };
	char gender = 'M';

	bool Program = true;

	while (Program)
	{
		std::cout << "Are you eligible for our special insurance package for retired women? Fill out the survey." << std::endl;

		bool ageselected = false;
		while (!ageselected)
		{
			std::cout << "Please enter your age: ";
			std::cin >> age;
			if (age < 0 || age > 120)
			{
				std::cout << "Invalid age. Please enter a valid age between 0 and 120." << std::endl;
			}
			else
			{
				ageselected = true;
			}
		}
		bool genderselected = false;
		while (!genderselected)
		{
			std::cout << "Please enter your gender (M/F): ";
			std::cin >> gender;
			switch (gender)
			{
			case 'M':
			case 'm':
				gender = 'M';
				genderselected = true;
				break;
			case 'F':
			case 'f':
				gender = 'F';
				genderselected = true;
				break;

			default:
				std::cout << "Invalid gender. try again." << std::endl;
			}
		}
		if (gender == 'F' && age > 61)
		{
			std::cout << "You are eligible to for our special inssurance for retired women." << std::endl;
			Program = false;
		}
		else if (gender == 'M' && age > 61)
		{ 
			std::cout << "You are not eligible for our special insurance package for retired women. " << std::endl;
			std::cout << "You may be eligible for our other insurane policies for men. Thank you for your time" << std::endl;
			Program = false;
		}
		else if (age < 61)
		{
			std::cout << "You are not eligible because you are not of retirement age. Thank you for your time." << std::endl;
			Program = false;
		}
	}

	return 0;
}