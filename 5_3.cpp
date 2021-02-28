#include<iostream>
using namespace std;

int main(){

	int x;
	cout << "Enter a category from 1-5!" <<endl;
	cin >> x;
	
	if (x==1){
	cout << "Category 1 hurricane the wind speed is traveling at 74-95 mph";
	}

	else if (x==2){
	cout << "Category 2 hurricane the wind speed is traveling at 96-110 mph";
	}

	else if (x==3){
	cout << "Category 3 hurricane the wind speed is traveling at 111-130 mph";
	}

        else if (x==4){
        cout << "Category 4 hurricane the wind speed is traveling at 131-155 mph";
	}

	else if (x==5){
	cout << "Category 5 hurricane the wind speed is traveling at 155 or more mph";
	}

	else {
	cout << "No such category exists!" << " Try again";
	}

	return 0;
}


