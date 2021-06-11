#include <iostream>
using namespace std;

int useRecursion(int x){

	if(x<10) return x;
	if (x<100) return (x/10)+(x%10);

	return useRecursion(x/10);
}

int main(){
	
	int integer;

	cout << "Enter a positive integer: ";
	cin >> integer;

	while(integer<=0){
		cout << "\nI said a positive number! \nTry again please: ";
		cin >> integer;
	}

	cout << "\nThe sum is " << useRecursion(integer);

	return 0;
}

