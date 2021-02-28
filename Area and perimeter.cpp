#include<iostream>
using namespace std;

int main(){

	int length; 
	int width;

	cout << " Enter the length: ";
	cin >> length;
	
	cout << " Enter the width: ";
	cin >> width;
	
	cout << " The area of the rectangle is " << length * width <<endl;
        cout << " The perimeter of the rectangle is " << (length * 2)+(2*width) <<endl;
	
	return 0;	

}
