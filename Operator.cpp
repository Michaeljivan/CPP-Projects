#include <iostream>
using namespace std;

//define methods
int add(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int multiply(int a, int b);

void get_inputs(char opr);

//methods
int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}

int divide(int a, int b){
	return a / b;
}

int multiply(int a, int b){
	return a * b;
}

void get_inputs(char opr){
	int a, b;
	cout << "Enter: ";
	cin >> a;

	cout << "Enter: ";
	cin >> b;

	//mini switch route to the correct operation
	switch(opr){
		case '+':
			cout << "Answer: " << add(a, b);
			break;
		case '-':
			cout << "Answer: " << subtract(a, b);
			break;
		case '*':
			cout << "Answer: " << multiply(a, b);
			break;
		case '/':
			cout << "Answer: " << divide(a, b);
			break;
	}
	
}

int main()
{
	char input_operator;
	cout << "Enter a symbol: + - / *" << endl;
	cin >> input_operator;

	switch(input_operator){
		case '+':
			cout << "Executing additional operator..." << endl;
			get_inputs(input_operator);
			break;
		case '-':
			cout << "Executing subtraction operator..." << endl;
			get_inputs(input_operator);
			break;
		case '/':
			cout << "Executing division operator..." << endl;
			get_inputs(input_operator);
			break;
		case '*':
			cout << "Executing multiplication operator..." << endl;
			get_inputs(input_operator);
			break;
		default:
			cout << "This is not a correct selection, program ending... " << endl;
	}
		
	return 0;
}
