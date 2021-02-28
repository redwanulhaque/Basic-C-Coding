#include<iostream>
using namespace std;

int main(){

	 int x,y,z;

	 cout << "Enter your first number: ";
	 cin >> x;
	 cout << "Enter your second number: ";
	 cin >> y;
	 cout << "Enter your last number: ";
	 cin >> z;

	 if ( x<y && y<z){
  	 cout << "The sequence of number is increasing!"<<endl;
	 }
	 else if (x>y && y>z){
   	 cout << "The sequence of number is decreasing!"<<endl;
	 }
	 else if (x>y && y<z ){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
         else if (x<y && y>z){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
	 else if (x==y){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
	 else if (x==z){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
	 else if (y==x){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl; 
       	 }
	 else if (y==z){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
	 else if (z==x){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }
	 else if (z==y){
	 cout << "The sequence of number is neither increasing or decreasing!"<<endl;
	 }

return 0;
}
					   
