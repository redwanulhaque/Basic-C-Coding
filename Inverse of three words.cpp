#include<iostream>
using namespace std;

int main(){

	string stored[100];
	int integer;

	cout << "Enter a number between 1 to 100: ";
	cin >> integer;

	if(integer<=0 || integer>100){
		cout << "\nThe program terminated its self! \nThanks a lot pal!\n\n\n";
		return 0;
	}

	cout << "\nNow enter " << integer << " words: ";
	for(int i=0; i<integer; i++){
		cin >> stored[i];
	}

	cout << "\nIn inverse the " << integer << " words are: ";
	for(int i = integer-1; i>=0; i--){
		cout << stored[i] << "  ";
	}

	cout << endl << endl << endl;

	return 0;
}
