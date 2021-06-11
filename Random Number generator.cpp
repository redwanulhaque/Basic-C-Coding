#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randFill(int stored[], int integer){

	srand(time(0));

	for(int i=0; i<integer; i++){

		cout << 10+(rand()%90) << endl;
	}
}

int main(){

	int stored[100];
	int integer;

	cout << "Enter a number between 1 and 100: ";
	cin >> integer;

	while(integer<=0 || integer>100){
		cout << "\nNot correct! \nTry again please: ";
		cin >> integer;
	}

	randFill(stored, integer);

	return 0;
}
