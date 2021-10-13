#include <iostream>
using namespace std;

int main()
{
	//User enters integer number
	//Program write out if that is even or odd

	int number;
	cout << "Please enter a whole number: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "You have entered even number." << endl;
	}
	else
	{
		cout << "You have entered odd number." << endl;
	}

	cout << "Thanks,bye.";

	system("pause>0");
}