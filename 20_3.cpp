#include<iostream>
using namespace std;

int main(){

	int stored[100];
	int integer;
	int i;
	int temp=0;

	cout << "Enter an integer from 1 to 100: ";
	cin >> integer;

	if(integer<=0 || integer>100){
		cout << "\nThe program terminated its self! \nNext time follow direction please!";
		return 0;
	}

	cout << "\nNow enter " << integer << " more integer! \nThey can be negative or positive: ";
	for( i=0; i<integer; i++){
		cin >> stored[i];
	}

	cout << "\nPositive number in Descending order" << endl;
	for(i=0; i<integer; i++){

		for(int a=i+1; a<integer; a++){
			if(stored[i]<stored[a]){															temp = stored[i];
				stored[i]=stored[a];	
				stored[a]=temp;
																				}																}		
	}

	for(int i=0;i<integer;i++)
		if(stored[i]>0){
			cout<<stored[i]<<" ";
			cout<<endl;
	}

	cout << "\nNegative number in Ascending order" << endl;
	for(i=0; i<integer; i++){

		for(int a=i+1; a<integer; a++){
			if(stored[i]<stored[a]){															temp = stored[i];	
				stored[i]=stored[a];				
				stored[a]=temp;
																				}																}
	}

	for(int i=0;i<integer;i++)
		if(stored[i]<0){
			cout<<stored[i]<<" ";
			cout<<endl;
	}

	return 0;
}
