#include<iostream>
using namespace std;

int main(){

	string first;
	string last;

	cout << "Enter your first and last name: ";
	cin >> first >> last;

	for(int i=0; i<=first.size(); i++){
		first[i] = tolower(first[i]);
	}

	for(int i=0; i<=last.size(); i++){
		last[i] = tolower(last[i]);
	}

	char x=first[0];
	char y=last[0];

	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
		first[0] = toupper(first[0]);
		cout << first + "way" << " ";
	}

	else if(x!='a' || x!='e' || x!='i' || x!='o' || x!='u'){
		first = first.erase (0,1)+first[0];
	        first[0] = toupper(first[0]);
		cout << first + "ay" << " ";
	}

	if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u'){
		last[0] = toupper(last[0]);
		cout << last + "way";
	}

	else if(y!='a' || y!='e' || y!='i' || y!='o' || y!='u'){
		last = last.erase (0,1)+last[0];
		last[0] = toupper(last[0]);
		cout << last + "ay";
	}

	return 0;
}
