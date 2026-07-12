#include <iostream>
#include <vector>
#include <string>







int main()
{
	std::vector<std::string> ShoppingList;
	bool running = true;
	std::string input;

	while (running)
	{
		std::cout << "Please enter an item to add to the shopping list" << std::endl;
		std::getline(std::cin, input);
		try {
			if (input.empty())
			{
				throw std::invalid_argument("Input cannot be empty");
			}
			else if (input == "exit")
			{
				std::cout << "Exiting the program\n\n" << std::endl;
				running = false;
			}
			else
			{
				ShoppingList.push_back(input);
				std::cout << "Item added to the shopping list" << std::endl;
			}
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "Shopping List:" << std::endl;
	std::cout << "----------------" << std::endl;
	for (const auto& item : ShoppingList)
	{
		std::cout << item << std::endl;
	}
	std::cout << "----------------" << std::endl;
}