#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int num1 , num2;
	cout<<"Enter number 1:"<<endl;
	cin>>num1;
	cout<<"Enter number 2:"<<endl;
	cin>>num2;
	switch (num1 > num2) {
		case 1:
			cout<<"Number 1 is Larger."<<endl;
			break;
		case 0:
			switch (num1 == num2) {
				case 0:
					cout<<"Number 2 is Larger."<<endl;
					break;
				case 1:
					cout<<"Both Numbers are equal."<<endl;
					break;
			}
			break;
		default:
			cout<<"Invalid Input!"<<endl;
		
	}
	
}
