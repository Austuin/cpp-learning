#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cctype>



int main() {
	std::vector<std::string> Title;
	std::vector<int> Ratings;
	bool Running = true;

	struct Movie
	{
		std::string MovieTitle = "";
		int MovieRating = 100;
	};

	std::vector<Movie> Movies;

	std::cout << "Welcom to the Movie Rater!\n\n===================================\n\nPlease input a movie title then a rating" << std::endl;
	while (Running)
	{
		Movie NewMovie;
		std::cout << "Enter a Movie title: ";
		std::getline(std::cin, NewMovie.MovieTitle);

		if (NewMovie.MovieTitle == "Exit" || NewMovie.MovieTitle == "exit" || NewMovie.MovieTitle == "EXIT")
		{
			std::cout << "Exiting...\n";
			Running = false;
			break;
		}
		std::cout << "Enter a Movie rating: ";
		while (!(std::cin >> NewMovie.MovieRating))
		{
			std::cout << "Please enter a valid integer movie rating! \nEnter a Movie rating: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "You added " << NewMovie.MovieTitle << ", at a rating of " << NewMovie.MovieRating << " please confirm. \n Type y to confirm or n to cancel and restart.";
		char confirm;
		std::cin >> confirm;
		char C = std::toupper(confirm);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (C == 'Y')
		{
			Movies.push_back(NewMovie);
		}
		else
		{
			std::cout << "You either said \"N\" or you entered an invalid option, either way your starting over.\n\n\n";
		}
	};
	std::cout << "\n\n\n======Movies======" << std::endl;
	for (const Movie& M : Movies)
	{
		std::cout << "Title: " << M.MovieTitle << " Rating: " << M.MovieRating << std::endl;
	}


	return 0;
}