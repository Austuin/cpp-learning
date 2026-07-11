#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>

int main() {
	// Number Section
	int MyInt{ 42 };
	float MyFloat = 3.14f;
	double MyDouble = 2.71828;

	//String section
	std::string hello = "Hello, Rose!";
	char MyChar = 'A';

	// boolean section
	bool MyBool = true;

	// comment section

	/*
		Arithmetic Operators:
			* + Addition
			* - Subtraction
			* * Multiplication
			* / Division
			* % Modulus
			* ++ Increment
			* -- Decrement

		Relational Operators:
			* == Equal to
			* != Not equal to
			* > Greater than
			* < Less than
			* >= Greater than or equal to
			* <= Less than or equal to
	*/

	/*	Control Statements:

		Control flow refers to the order in which instructions are executed in a program. Control statements allow you to change the flow of execution based on certain conditions or loops.

		controls
			* if statement
			* else statement
			* else if statement
			* switch statement
			* for loop
			* while loop
			* do-while loop

		3 major types of control flow statements:
		Sequence statements:


		Selection statements:


		Repitition statements:


			*/


			//section 1 & 2
			/*
				int A { 10 };
				int B{ 3 };
				int Sum{ A + B };
				int Difference{ A - B };
				int Product{ A * B };
				int Quotient { A / B };
				int Remainder{ A % B };
				int Xor{ A ^ B };
				// syntactic sugar for printing to the console
				int result = 0;
				result += 5; // result = result + 5


				std::string FullName = "John Doe";
				std::string Location = "New York City";
				int Score = 100;

				std::cout << "Result:" << result << std::endl;

				std::cout << std::boolalpha;
				std::cout << MyBool << std::endl;

				std::cout << "Sum: " << Sum << std::endl;
				std::cout << "Difference: " << Difference << std::endl;
				std::cout << "Product: " << Product << std::endl;
				std::cout << "Quotient: " << Quotient << std::endl;
				std::cout << "Remainder: " << Remainder << std::endl;
				std::cout << "Xor: " << Xor << std::endl;

				std::cout << "Please enter a number: ";
				std::cin >> A;
				std::cout << "You entered: " << A << std::endl;

				std::cout << "Please enter a your full name: ";
				std::cin.get();
				std::getline(std::cin, FullName);
				std::cout << "Please enter your location: ";

				std::cin.get();
				std::getline(std::cin, Location);

				std::cout << "Please enter your score: ";
				std::cin >> Score;

				std::cout << "Hello, " << FullName << " You are from: "
					<< Location << " Your score is: " << Score <<
					" but with 5 points added, your score is " << (Score + 5) << std::endl;
					*/


					//section 3

	/*int age{10};
	if (age > 16)
	{
		std::cout << "You are old enough to drive." << std::endl;
	}
	else
	{
		std::cout << "You are not old enough to drive." << std::endl;
	}

	for (int i = 0; i <= age; i++)
	{
		std::cout << "Happy Birthday! You are " << i << " years old." << std::endl;
	}
	*/
	/*
	int input{ 0 };
	int total{ 0 };
	while (input >= 0)
	{
		std::cout << "Please enter a positive number (or a negative number to exit): ";
		try
		{
			std::cin >> input;
			if (std::cin.fail()) {
				throw std::invalid_argument("Invalid input");
			}
		}
		catch (const std::exception& e)
		{
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear(); // Clear the error flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
			continue; // Skip to the next iteration of the loop
		}
		if (input < 0)
		{
			std::cout << "Exiting the program." << std::endl;
			break;
		}
		total += input;
		std::cout << "Current total: " << total << std::endl;
	}
	*/
	/*
	for (int i = 1; i <= 500; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << std::endl;
		}
		else
		{
			continue;
		}
	}*/

	/*
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++)
	{
		int value = rand() % 6 + 1;
		std::cout << "Roll " << i << ": " << value << std::endl;
	}
	return 0;*/

	//const int Array_Size = 10;

	//int Numbs[Array_Size];

	//for (int i = 0; i < Array_Size; i++)
	//{
	//	Numbs[i] = i + 1;
	//}
	//for (int number: Numbs)
	//{
	//	std::cout << number << std::endl;
	//	std::cout << number << std::endl;
	//}

	//std::vector<std::string> Names{"Jess","James","Jimmy","Jack", "Jacob"};

	//Names.insert(Names.begin() + 3 , "Rose"); // 

	//for (const auto& name : Names)
	//	std::cout << name << std::endl;
	//Names.pop_back(); // removes the last element from the vector
	//for (const auto& name : Names)
	//	std::cout << name << std::endl;
	
}