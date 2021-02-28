#include<iostream>
using namespace std;

int main(){

	int stored[100];
	int integer;
	int i;

	cout << "Enter number of rows from 1 to 100: ";
	cin >> integer;

	if(integer<=0 || integer>100){
		cout << "\nThe program terminated its self. \nThanks a lot pal!";
		return 0;
	}

	cout << "\nNow enter the length for " << integer << " rows: ";
	for( i=0; i<integer; i++){
		cin >> stored[i];
	}
	cout << endl;

	for(int i=0; i<integer; i++){
															for(int x=stored[i]; x>0; x--){											cout << " * ";
														  }
														  cout << endl;
														  }

	return 0;
}
