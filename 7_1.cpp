#include <iostream>

using namespace std;

int main()
{
	int num, sum=0, odd;
	cout << "Please enter a positive integer: ";
	cin >> num;

	while(num<=0){
		cout << "\nNot Positive MORON! \nTry again: ";
		cin >> num;
	}
	
	while(num>0){
		odd=num%10;
		if(odd%2==1){
		sum=sum+odd;
	}
	num=num/10;
	}

	cout << "\nThe sum of all odd digits of the number is " << sum;


	return 0;
}
