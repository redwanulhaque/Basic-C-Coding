#include<iostream>
using namespace std;

double countChange(int q,int d,int n, int p){

	double sum=(q*0.25)+(d*0.10)+(n*0.05)+(p*0.01);
	return sum;
}

int main(){

	int q,d,n,p;

	cout << "Enter number of quarters: ";
	cin >> q;

	cout << "\nEnter number of dimes: ";
	cin >> d;

	cout << "\nEnter number of nickels: ";
	cin >> n;

	cout << "\nEnter number of pennies: ";
	cin >> p;

	cout << "\nThe amount of money you have is $ " << countChange(q,d,n,p);

	return 0;
}

