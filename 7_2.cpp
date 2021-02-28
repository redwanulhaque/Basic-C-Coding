#include<iostream>
using namespace std;
int main(){

	int price, sum=0;

	cout << "Enter the price of your items: $";
	cin >> price;

	while(price<0){
	cout << "\nPrice of your items can't be negative you MORON! \nTry again: $";
	cin >> price;
	}

	while(price != 0){
	sum=sum+price;
	cout << "\nTo calculate total price enter 0 \nEnter more prices: $";
	cin >> price;
	}

	cout << "\nThe total price is $" << sum;

	if(sum>100){
	cout << "\n\nThats EXPENSIVE! What are you even buying???";
	}

	return 0;
}

