#include <iostream>  // Preprocessor Header file
using namespace std;    // using the standard name spaces
int main(){
	int num1, num2;   // Declaring integer variables
	float result;		// Declaring float variable to store result
	char operation , check;    // Declaring character variable to get operation
	bool con = true;
	while (con) {
	cout<<endl<<"Enter First number: ";
	cin>>num1;
	cout<<"Enter the Operation(+, -, *, /): ";    
	cin>>operation;
	cout<<"Enter Second number: ";
	cin>>num2;
	if (operation=='+') {
		result = num1 + num2;
		cout<<"Results: "<<result;
	}
	else if (operation=='-') {
		result = num1 - num2;
		cout<<"Results: "<<result;
	}
	else if (operation=='*') {
		result = num1*num2;
		cout<<"Results: "<<result;
	}
	else if (operation == '/') {
		result = num1/num2;
		cout<<"Results: "<<result;
	}
	else {
		cout<<"Something Went Wrong!"<<endl;
	}
	
	cout<<endl<<"Do you want to continue?(y/n): "<<endl;   
	cin>>check;
	if (check == 'y' || check == 'Y'){
		con = true;
	}
	else {
		con = false;
	}
	
	system("cls");
}
}
