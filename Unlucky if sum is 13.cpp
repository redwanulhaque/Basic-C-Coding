#include<iostream>
using namespace std;

int unlucky(int x){
	if(x<10) return false;

	if((x/10)+(x%10)==13){
		cout << "\nUnlucky!\n";
	if(x<100) return (x/10)+(x%10);}
	
	return unlucky(x/10);
}

int main(){

	int integer;

	cout << "Enter a positive integer: ";
	cin >> integer;

	cout << endl << unlucky(integer);

	return 0;
}
