#include<iostream>
using namespace std;

void Sort(int &a, int &b, int &c){
	if(a<b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	if(a<c){
		int tmp = a;
		a=c;
		c = tmp;
	}
	if(b<c){
		int tmp = b;
		b=c;
		c=tmp;
	}
return;
}

int main(){

	int a,b,c;

	cout << "Enter a number: ";
	cin >> a;

	cout << "\nEnter another number: ";
	cin >> b;

	cout << "\nEnter the last number please: ";
	cin >> c;

	Sort(a,b,c);

	cout << "\nThe number in decreasing order is "<< a << " " << b << " "<< c;

	return 0;
}
