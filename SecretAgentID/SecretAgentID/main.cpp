#include <iostream>
#include <string>

int main()
{
	std::string FullName, Alias, Gadget;
	int Age, AgentLevel;

	std::cout << "Welcome Agent, we need a few details to admit you into the system." << std::endl;
	std::cout << "Please enter your full name: ";
	std::getline( std::cin,FullName);
	std::cout << "Thank you, " << FullName << ". Now, please enter your alias: ";
	std::getline(std::cin, Alias);
	std::cout << "Thank you Agent " << Alias << ". Now, please enter your age: ";
	std::cin >> Age;
	std::cout << "Thank you. Now, please enter your agent level (1-10): ";
	std::cin >> AgentLevel;
	std::cout << "Thank you. Finally, please enter your favorite gadget: ";
	// Consume the newline character left in the input buffer before reading the gadget
	std::cin.get();
	std::getline(std::cin, Gadget);
	std::cout << "Thank you, Agent " << Alias << ". Here is the information you provided:" << std::endl;

	std::cout << "=========================================" << std::endl;
	std::cout << "	S.E.C.R.E.T    A.G.E.N.T." << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << "Full Name: " << FullName << std::endl;
	std::cout << "Alias: " << Alias << std::endl;
	std::cout << "Age: " << Age << std::endl;
	std::cout << "Agent Level: " << AgentLevel << std::endl;
	std::cout << "Favorite Gadget: " << Gadget << std::endl;
	std::cout << "=========================================" << std::endl;





}