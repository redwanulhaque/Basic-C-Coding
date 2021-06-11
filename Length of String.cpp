#include<iostream>
using namespace std;

int main(){

	string s = "Hello";

	for(int i=s.size()-1; i<=s.size(); i--){
		cout << s[i];
	}

	cout << "\n\nThe length of string s is " << s.size();

	return 0;
}
