#include<iostream>
using namespace std;

int main(){

	int integer;
	int stored[100][100];
	int max;

	cout << "Enter a number between 1 and 100: ";
	cin >> integer;

	while(integer<=0 || integer>100){
		cout << "\nFollow direction you newbie! \nTry again: ";
		cin >> integer;
	}

	for(int i=0; i<integer; i++){
		cout << "\nNow enter " << i+1 << " row of " << integer << " integer: \n";
		for(int x=0; x<integer; x++){
			cin>> stored[i][x];
		}
	}

	max=stored[0][0];

	for(int i=0; i<integer; i++){
		for(int x=0; x<integer; x++){
			if(stored[i][x]>max){
				max=stored[i][x];
			}
		}
		cout << "\nThe biggest number in row " << i+1 << " is " << max;
		max=0;
	}

	return 0;
}
