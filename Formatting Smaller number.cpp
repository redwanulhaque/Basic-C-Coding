#include<iostream>
using namespace std;
int main(){

	int n,number;

	cout << "Type a big integer n: ";
	cin >> n;

	for(int i=1; i<=4; i++){

		cout << "\nType a smaller value of n: ";
		cin >> number;

		if(number>=n){
			cout << "\nGoodbye! \nDon't feel bad you tried though.";
			break;
	}
	n=number;
	}
	cout << "\n\nThank you!\n\n";


	return 0;
}

