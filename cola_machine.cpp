/*
Cola Machine
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."

*/

#include <iostream>
using namespace std;

int main(){
	int selection;

	cout << "Select a beverage: [1] Coke [2] Sprite [3] Water [4] OJ [5] Fanta Orange" << endl;
	cin >> selection;

	switch(selection){
		case 1: 
			cout << "Coke!" << endl; 
			break;
		case 2: 
			cout << "Sprite!" << endl;
			break;
		case 3: 
			cout << "Water!" << endl; 
			break;
		case 4: 
			cout << "Orange Juice!" << endl; 
			break;
		case 5: 
			cout << "Coke!" << endl;
			break;
		default: 
			cout << "You did not pick anything!!" << endl;
			break;
	}

	return 0;
}
