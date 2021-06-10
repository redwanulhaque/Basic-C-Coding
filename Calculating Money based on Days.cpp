#include<iostream>
using namespace std;

int main()
{
	int days = 1;
	double money = 1.0;

	cout << "Enter number of days: ";
	cin >> days;

	while (days < 1){
	cout << "Please enter a valid number of days: ";
	cin >> days;
	}


	for (int i = 1; i <= days; i++){
	cout << "Days " << i << " you earn $" << money / 100 << endl;
	money *= 2;
	}

	return 0;
}

