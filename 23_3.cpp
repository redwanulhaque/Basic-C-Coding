#include<iostream>
using namespace std;

int maxCol(int stored[][4], int row, int column){

	int result =-1;
	int max;
	int sum =0;

	for(int i=0; i<column; i++){
		sum=0;
		for(int x=0; x<row; x++)
			sum+= stored[x][i];
			if(result == -1 || sum>max){
				max = sum;
				result = i;
		}
	}
	return result+1;
}

int main(){

	int stored[2][4];

	for(int i=0; i<2; i++){
		cout << "Enter 4 number for row " << i+1 << ": ";
		for(int x=0; x<4; x++){
			cin >> stored[i][x];
		}
	}

	cout << "\nEntries of Two Rows";
	for(int i=0; i<2; i++){
		cout << "\nRow " << i+1 << ": ";
		for(int x=0; x<4; x++){
			cout << stored[i][x] << "\t";
		}
	}

	cout << "\n\nThe column with the largest sum is column "<< maxCol(stored,2,4);

	return 0;
}

