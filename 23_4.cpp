#include<iostream>
using namespace std;

void sumDiff(int one[], int two[], int column){

	int sum;

	cout << "Row 1: ";
	for(int i=0; i<column; i++){
		sum=one[i]+two[i];
		one[i]=sum;;
		cout << one[i] << "\t";	
	}

	cout << "\nRow 2: ";
	for(int i=0; i<column; i++){
		sum=one[i]-two[i];
		one[i]=sum;
		two[i]=one[i]-two[i];
		cout << two[i] << "\t";
	}
}

int main(){

	int one[4]={7,6,8,4};
	int two[4]={2,6,3,9};

	sumDiff(one, two, 4);

	return 0;
}

