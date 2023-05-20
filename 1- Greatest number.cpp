#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	string name;
	cout<<"What is your name?";
	getline(cin, name);
	cout<<"Your name is: "<<name<<endl;
	cout<<"Enter three number:"<<endl;
	cin>>a>>b>>c;
	cout<<"\nThe numbers are: "<<endl<<a<<endl<<b<<endl<<c<<endl;
	if (a>b) {
		if (a>c){
			cout<<"a is the greatest number.";
		}
		else {
			cout<<"c is the greatest number.";
		}
	}
	else {
		if (b>c){
			cout<<"b is the greatest number.";
		}
		else {
			cout<<"c is the greatest number.";
		}
	}
}
