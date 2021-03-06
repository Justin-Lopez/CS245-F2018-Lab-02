#include "pch.h"
#include "ctype.h"
#include <random>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{

	// Create a vector of strings; add items using a list initializer
	vector<string> movies = { "John Carter","Operation Dumbo dro","Jack & Jill" };


	// Add a 5th string to the end of the vector

	movies.push_back("Titanic 2: The Quickening");

	// Announce the nominees
	cout << "And the nominees for Best Picture (cough) are..." << endl;

	// Loop through the vector; print each vector element to console.

	for (size_t i = 0; i < movies.size(); ++i)
	{
		std::cout << movies[i] << std::endl;
	}

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 1 to 5 (inclusive)
	std::uniform_int_distribution<int> rand_dist(0, 4);

	// Get the next random integer
	int pick_a_number = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	string winner = movies.at(pick_a_number);

	// Convert each charcter of the 'winner' string to UPPERCASE


	for (char &c : winner)
	{

		// for loops has to change, toupper is not part of the class.
		c = toupper(c);

	}

	// Print the UPPERCASE string
	cout << "And the winner is..." << winner << std::endl;


	return 0;
}
