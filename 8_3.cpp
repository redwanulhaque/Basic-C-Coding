#include<iostream>
using namespace std;
int main(){

	int counter=0;
	double grade,average=0;

	cout << "Enter the grades: ";
	cin >> grade;

	while(grade>=0){
		average=(grade+average);
		cout << "\nTo calculate the average enter a negative number \nEnter more grades: ";
		cin >> grade;
		counter++;
	}

	cout << "\nTotal number of grades entered: " << counter;
	cout << "\nThe average: " << (average/counter);

	if(average<=80){
		cout << "\n\nNext test I better see that average above 80! \nI am warning you!";
	}

	else if(average>=80){
		cout << "\n\nThe class deserves cookies!";
	}

	return 0;
}
