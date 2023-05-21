#include <iostream>
using namespace std;

int main(){
	int num1 , num2;
	char operation;
	float result;
	cout<<"<<<<<<===== You can enter 'Q' at any point to exit program =====>>>>>>"<<endl;
	cout<<"Enter the number: "<<endl;
	cin>>num1;
	cout<<"Enter the operation: "<<endl;
	cin>>operation;
	cout<<"Enter next number: "<<endl;
	cin>>num2;
	if (operation == 'q' || operation == 'Q') {
		exit(0);
	}
	else if (operation == '+') {
		result  = num1 + num2 ; 
		cout<<"Answer : "<<result;
	}
	else if (operation == '-') {
		result = num1 - num2;
		cout<<"Answer : "<<result;
	}
	else if (operation == '*') {
		result = num1 * num2;
		cout<<"Answer : "<<result;
	}
	else if (operation == '/') {
		result = num1/num2;
		cout<<"Answer :"<<result;
	}
	else {
		cout<<"Invalid Option!"<<endl;
	}
	
	while (true) {
	cout<<endl<<"Enter the operation: "<<endl;
	cin>>operation;
	cout<<"Enter next number: "<<endl;
	cin>>num1;
	if (operation == 'q' || operation == 'Q') {
		exit(0);
	}
	else if (operation == '+') {
		result  = result + num1 ; 
		cout<<"Answer : "<<result;
	}
	else if (operation == '-') {
		result = result - num1;
		cout<<"Answer : "<<result;
	}
	else if (operation == '*') {
		result = result * num1;
		cout<<"Answer : "<<result;
	}
	else if (operation == '/') {
		result = result/num1;
		cout<<"Answer :"<<result;
	}
	else {
		cout<<"Invalid Option!"<<endl;
	}
}
	return 0;
}
