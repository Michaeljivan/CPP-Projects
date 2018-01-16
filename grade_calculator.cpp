#include <iostream>
using namespace std;

int main()
{
	int grade;
	
	cout << "Enter your grade: " << endl;
	cin >> grade;
	
	if(grade == 100)
	{
		cout << "Perfect Score!\n";
		cout << "Grade Recieved: A\n";
	}
	else if(grade >= 90 && grade <= 99)
	{
		cout << "Great Job!\n";
		cout << "Grade Recieved: A\n";
	}
	else if(grade >= 80 && grade <= 89)
	{
		cout << "Fair enough!\n";
		cout << "Grade Recieved: B\n";
	}
	else if(grade >= 70 && grade <= 79)
	{
		cout << "Average!\n";
		cout << "Grade Recieved: C\n";
	}
	else if(grade >= 60 && grade <= 69)
	{
		cout << "Not good!\n";
		cout << "Grade Recieved: D\n";
	}
	else if(grade >= 0 && grade <= 59)
	{
		cout << "I am dissapointed!\n";
		cout << "Grade Recieved: F\n";
	}else{
		cout << "You did not input a grade!\n";
	}

	return 0;
}
