#include<iostream>
using namespace std;
int main(){

	int number,counter=1,sum;

	cout << "Enter a number greater then 100: ";
	cin >> number;

	while(number <= 100){
	cout << "\nInvalid! \nTry again: ";
	cin >> number;
	}

	while(counter*counter<number){
	sum=counter*counter;
	cout << "\n" << counter << "^2" << " = " << sum <<endl;
	counter++;
	}

	return 0;
}

