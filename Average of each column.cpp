#include<iostream>
using namespace std;

int main(){

	int integer;
	int stored[100][100];
	double sum=0;
	double average=0;

	cout << "Enter a number between 1 and 100: ";
	cin >> integer;

	while(integer<=0 || integer>100){
		cout << "\nTry again please: ";
		cin >> integer;
	}

	for(int i=0; i<integer; i++){
		cout << "\nNow enter " << i+1 << " row of " << integer << " integers: \n";
		for(int x=0; x<integer; x++){
			cin >> stored[i][x];
		}
	}

	for(int i=0; i<integer; i++){

		for(int x=0; x<integer; x++){
			sum+=stored[x][i];
		}
	average=sum/integer;
	cout<< "\nThe average of column " << i+1 << " is: " << average;
	sum=0;
	}

	return 0;
}
