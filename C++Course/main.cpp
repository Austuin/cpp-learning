#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <cmath>

int inputnum{ 0 };

int Globalint{0};

//pass by value
void valuechange(int x);

//pass by referecne, the & symbol is what nmakes it pass by reference.
void valuechange2(int& x);

void GlobalIncrementer();

int Factorial(int x);

void printsomething();
int square(int x);
void CountDown(int x);
double AverageOfThree(double x, double y, double z);
int EvenCount{ 0 };

std::vector<int> NumList{ 1,2, 4};

bool IsEven(int x);
int ListProduct(std::vector<int> x);
void ListProductRef(std::vector<int> x, int& result);
int result{ 1 };
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


// section 5 - Functions

printsomething();
std::cout << "Input a integer: ";
//std::cin >> inputnum;
inputnum = 5;
int Squared = square(inputnum);
std::cout << "Your " << inputnum << " Squared is " << Squared << "." << std::endl;

valuechange(inputnum);
valuechange2(inputnum);

std::cout << "See now your input is " << inputnum << std::endl;


/*scope
* variables declared inside a function are not available to be called outside the function, and visa versa a variable declared outside a function is not callable inside a function. - this means you can have int x = 4 outside a function and int x = 8 innside a function and have no conflicts.
* 
* staic variables are presistant, you can increment them every call. Its lifetime is the entire run of the program even if the is locally called in a function.
* 
* Type - Scope - Lifetime
* Local - Inside the function - until function finishes
* Global - Whole program - until program finish
* Static - Inside function - until program finish
* 
*/

//Shows you can increment a global value using a void/no return type function, by not passing it a variable. Scope = global.
std::cout << "Global int before: " << Globalint << std::endl;
for (int i = 0; i < 100; i++)
{
	GlobalIncrementer();
}
std::cout << "Global int after: " << Globalint << std::endl;

/* Function Overloading
* Function Overloading means you can have multiple functions with the same nameas long as thier signatuires are different e.g. the parameters are different.
* Example: std::string Function1(std::string x), int Function1(int x) and int Function1(int x, int y), are allowed.
*/


/*<cmath>
* The cmath 
* pow() - is to the power of, pow(2, 3) = 8
* sqrt() - square root of, sqrt(25) = 5
* ceil() - rounds up from a decimal, ceil(4.2) = 5
* floor() - rounds down from a decimal, floor(4.8) = 4
* log2() - This gives you the binary logarithm of a number, log2(8) = 3, because 2^3 = 8
* and more... cplusplus.com and search cmath for all the functions
*/


/* Recursion
* To understand recursion is to understand recursion is to understand recursion is to understand recursion.
* recursion is a function that calls itslef to solve a problem.
*
* 
* NEVER FORGET THE BASE CASE. If you do forget the base case  it will keep calling until oyu have a stack overlfow. 
*/
CountDown(5);
std::cout << Factorial(5) << std::endl;
std::cout << "The average of 81, 45 and 96 is: " << AverageOfThree(81, 45, 96) << std::endl;

for (int i : NumList)
{
	if(IsEven(i))
	{
		EvenCount++;
	}
}
double Size = NumList.size();
std::cout << "Out of " << Size << " numbers " << EvenCount << " are even. That is " << (EvenCount / Size)*100 << "% of the list." << std::endl;

std::cout << "The prodict of the list is: " << ListProduct(NumList) << std::endl;
ListProductRef(NumList, result);
std::cout << "The product of the list in global result is: " << result << std::endl;

return 0;
}

//Standards are to have functions below main and to prototype/declare the function above main.
void printsomething()
{
	std::cout << "Hi!" << std::endl;
}

int square(int x)
{
	return x*x;
}

void valuechange(int x)
{
	x*= 8;
	std::cout << "You value inside valuechange() is " << x << std::endl;
}

void valuechange2(int& x)
{
	x *= 5;
	std::cout << "You value is now " << x << " Thanks to valuechange2. As it now saves the value outside the function." << std::endl;
}

void GlobalIncrementer()
{
	Globalint++;
}

void CountDown(int x)
{
	if(x >= 0)
	{
		std::cout << x << std::endl;
		CountDown(x - 1);
	}
}

int Factorial(int x) 
{
	if(x>1)
	{
		x *= Factorial(x - 1);
	}
	else
	{
		return x;
	}
}

double AverageOfThree(double x, double y, double z)
{
	return (x + y + z) / 3;
}

bool IsEven(int x)
{
	if(x%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int ListProduct(std::vector<int> x)
{
	int Prod{ 1 };
	for(int i : x)
	{
		Prod *= i;
	}
	return Prod;
}

void ListProductRef(std::vector<int> x, int& result)
{
	for (int i : x)
	{
		result *= i;
	}
}

