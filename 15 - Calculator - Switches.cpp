#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float num1 , num2, result;
	char operation;
	while (true) {
	cout<<"Enter First Number:"<<endl;
	cin>>num1;
	cout<<"Enter Operation:"<<endl;
	cin>>operation;
	cout<<"Enter Second Number:"<<endl;
	cin>>num2;
	
	switch (operation) {
		case '+':
			result = num1 + num2 ;
			cout<<"Result:"<<result;
			break;
		case '*':
			result = num1*num2 ; 
			cout<<"Result:"<<result;
			break;
		case '-':
			result = num1-num2;
			cout<<"Result:"<<result;
			break;
		case '/':
			result = num1/num2;
			cout<<"Result:"<<result;
			break;
		default:
			cout<<"Invalid Option!!!";
	}
	getch();
	system("cls");
	
}
	return 0;

}
