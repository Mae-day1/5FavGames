// Cheyenne Englebright Coding1b Feb 26th, 2025
// 5FavGames

#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Would you like to start the program?\n";
	cout << "Press 1 to run the program.\n";

	string favGames[10];
	string input; 
	getline(cin, input);

	if (stoi(input) == 1) {
		cout << "Starting the program.\n";
	}
	else {
		cout << "Ok! Goodbye.\n";

		return 0;
	}

	cout << "Would you like to Add, Edit, Remove, or Show the game list? Or Quit? \n";

	if (input == "Add") {
	

	}
	else if (input == "Edit") {

	}
	else if (input == "Remove") {
		for (int i = 0; i < 10; i++) {
			if (input == favGames[i]) {
				cout << "I've found the game, removing it now.\n";
				favGames[i] = "";
			}
		}
	}
	else if (input == "Show") {
		for (int i = 0; i < 10; i++) {
			if (favGames[i] == "") {
				continue;
			}
			else {
				cout << favGames[i] << ".\n";
			}
		}
	}
	else if (input == "Quit") {
		cout << "Ok, Goodbye.\n";
		return 0;
	}


	favGames[0] = "Skyrim";
	favGames[1] = "Fallout 3";
	favGames[2] = "Animal Crossing: New Horizons";
	favGames[3] = "Cult of the Lamb";
	favGames[4] = "The Last of Us";
	
	cout << "Here are all my favorite games.\n";
	int index = 0;
	while (index < 5) {
		cout << favGames[index] << "\n";
		index++;
	}

	return 0;
}