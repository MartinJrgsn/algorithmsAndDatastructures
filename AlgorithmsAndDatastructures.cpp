#include <iostream>
#include <string>
#include <vector>
#include "1_Arrays.h"

int main()
{
	// Creating a switch statement, allows for ease of use, when it comes to presenting the differing examples:

	char example{ 'p' };
	std::vector<std::string> examples
	{ 
		"'a': example 1", 
		"'b': example 2", 
		"'c': example 3" 
	};

	while (example != 'q') {
		switch (example) {
		case 'p': // print examples available for presentation
			std::cout << "Enter a single character value in order to print out the following:\n";
			for (auto exampleTexts : examples) {
				std::cout << exampleTexts << "\n";
			}
			std::cin >> example;
			system("cls");
			break;
		
		case 'a':
			arrayExamples::exampleA::presetRun();
			std::cout << "\n continue? type any character -> RETURN, quit type 'q' -> RETURN: ";
			std::cin >> example;
			example = 'e';
			system("cls");
			break;

		case 'q':
			break;

		default:
			std::cout << "invalid response, try again: ";
			std::cin >> example;
		}
	}
}