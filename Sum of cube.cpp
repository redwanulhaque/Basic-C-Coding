#include<iostream>
using namespace std;

int sumCubes(int x){

	if(x==1) return 1;

	return (x*x*x)+sumCubes(x-1);
}

int main(){

	int number;
	cout << "Enter a number that is positive: ";
	cin >> number;

	while(number<=0){
		cout << "\nYou didn't follow direction! \nPlease try again: ";
		cin >> number;
	}

	cout << "\nThe sum of cubes from " << number << " to 1 is " << sumCubes(number);

	return 0;
}

