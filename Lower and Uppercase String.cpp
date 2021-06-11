#include<iostream>
using namespace std;

int main(){

	string s;

	cout << "Enter a string with at most 100 characters in length: ";
	cin >> s;

	while(s.size()>100){
		cout << "\nYou didn't follow direction! \nTry again please: ";
		cin >> s;
	}

	cout << "\nOriginal string: " << s;

	cout << "\n\nUppercase Form: ";
	for(int i=0; i<=s.size(); i++){

		if(s[i]>=97 && s[i]<=122){
			s[i]=s[i]-32;
		}
	cout << s[i];
	}

	cout << "\n\nLowercase Form: ";
	for(int i=0; i<=s.size(); i++){

		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
	        }
          cout << s[i];
	}

	return 0;
}
