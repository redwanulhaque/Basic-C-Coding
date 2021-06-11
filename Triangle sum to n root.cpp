#include <iostream>
using namespace std;
int main(){

	int row=10, sum=0;

	for(int i=1; i<=row; i++){

		for(int x=i; x<=i*i; x++){
			cout << " " << x;
			sum = sum+x;
	}
	cout << " the sum is " << sum;
	sum=0;
	cout << endl;
	}
	
	return 0;
}
