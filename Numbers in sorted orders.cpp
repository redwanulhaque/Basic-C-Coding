#include<iostream>
using namespace std;

void insertionSort(int stored[], int integer){

	int temp=0;

	for(int i=0; i<integer; i++){
		for(int a=i+1; a<integer; a++){
			if(stored[i]>stored[a]){
				temp = stored[i];
				stored[i]=stored[a];
				stored[a]=temp;}
		}
	cout << stored[i] << " ";
	}
}

int main(){

	int stored[20];
	int integer;
	
	cout << "Enter a number between 1 and 20: ";
	cin >> integer;

	while(integer<=0 || integer>20){
		cout << "\nWrong input! \nTry again please: ";
		cin >> integer;
	}

	cout << "\nNow enter " << integer << " number: ";
	for(int i=0; i<integer; i++){
		cin >> stored[i];
	}

	cout << "\nOriginal Input Entries\n";
	for(int i=0; i<integer; i++){
		cout << stored[i] << "\t";
	}

	cout << "\n\nNumber In Sorted Order\n";
	insertionSort(stored, integer);

	return 0;
}
