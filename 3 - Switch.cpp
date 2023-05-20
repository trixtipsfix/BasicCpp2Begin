#include <iostream>
using namespace std;

int main(){
	int a;
	bool condition;
	char con;
	condition  = true;
	while (condition == true) {

	cout<<"Enter a number: ";
	cin>>a;
	switch (a) {
		case 1:
			cout<<"One";
			break;
		case 2:
			cout<<"Two";
			break;
		case 3:
			cout<<"Three";
			break;
		case 4:
			cout<<"Four";
			break;
		default:
			cout<<"Enter a valid number.";
			break;
	}
	cout<<endl<<"Enter 'y' to continue: ";
	
	cin>>con;
	if (con == 'y') {
		condition = true;
	}
	else {
		condition = false;
	}
	}
	cout<<"Thanks for using!";
	
}
