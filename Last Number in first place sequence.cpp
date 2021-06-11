#include<iostream>
using namespace std;

void advance(int stored[], int length){

	int a;
	a=stored[0];
	a=stored[length-1];
	cout << a << " ";

	for(int i=1-1; i<length-1; i++){
		cout<< stored[i] << " ";
	}
}

int main(){

	int stored[20];
	int integer;

	cout << "Enter a number between between 1 and 20: ";
	cin >> integer;

	while(integer<=0 || integer>20){
		cout << "\nNot what I expected! \nTry again please: ";
		cin >> integer;
	}

	for(int i=0; i<integer; i++){
		cout << "\nEnter your " << i+1 << " integer: ";
		cin >> stored[i];
	}

	cout << "\nOriginal Sequence: ";
	for(int i=0; i<integer; i++){
		cout << stored[i] << " ";
	}

	cout << endl << endl;

	cout << "Last Number In First Place Sequence: ";
	advance(stored,integer);

	return 0;
}

