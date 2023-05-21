#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int number;
	while (true) {
	cout<<"Enter the Number: "<<endl;
	cin>>number;
	switch (number%2==0){
		case 1:
			cout<<"Even"<<endl;
			break;
		case 0:
			cout<<"Odd"<<endl;
			break;
		default:
			cout<<"Invalid Option."<<endl;
	}
	getch();
	system("CLS");
}
}
