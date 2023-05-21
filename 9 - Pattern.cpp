#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char star = '*', dot = '.';
	char by;
	int row , col ; 
	cout<<"How many Row & Columns you want to print? (row x column): "<<endl;
	cin>>row>>by>>col;
	int var;
	for (int i = 0 ; i < row ; i++) {
		int x = 0 ;
		while (x < col) {
			cout<<star<<" ";
			x++;
			if (x>=col){
				break;
			}
			cout<<dot<<" ";
			x++;
		
		}
		cout<<endl;
		
	}
	cout<<"Press Enter to Exit....";
	getch();
	system("cls");
	return 0;
}
