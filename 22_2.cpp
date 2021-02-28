#include<iostream>
using namespace std;

void Entries(int stored[][5], int row, int column){

	int counter=0;

	for(int i=0; i<row; i++){
		cout << "\nRow " << i+1 << ": ";
		counter =0;
		for(int x=0; x<column; x++){
			if(stored[i][x]>0)
			counter++;
		}
		cout << counter;
	}
}

int maxRow(int stored[][5], int row, int column){

	int x= -1;
	int max;
	int counter=0;

	for(int i=0; i<row; i++){

		for(int x=0; x<column; x++)
			if(stored[i][x]>0) counter++;
			if(x == -1|| counter>max){
				max = counter;
				x = i;
		}
	}
	return x;
}

int main(){

	int stored[20][5];
	int integer;

	cout << "Enter a row number between 1 and 20: ";
	cin >> integer;

	while(integer<=0 || integer>20){
		cout << "\nLearn to follow direction! \nTry again: ";
		cin >> integer;
	}

	for(int i=0; i<integer; i++){
		cout << "\nEnter 5 numbers for your " << i+1 << " row: ";
		for(int x=0; x<5; x++){
			cin >> stored[i][x];
		}
	}

	cout << "\nThe Number Sequence";
	for(int i=0; i<integer; i++){
		cout << "\nRow " << i+1 << ": ";
		for(int x=0; x<5; x++){
			cout << stored[i][x] << " ";
		}
	}

	cout << "\n\nNumber of Positive Entries";
	Entries(stored,integer,5);
	cout << "\n\nThe Row with the biggest Positive Entries is " << maxRow(stored,integer,5);

	return 0;
}
