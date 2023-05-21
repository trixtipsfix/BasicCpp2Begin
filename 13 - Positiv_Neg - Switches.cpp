#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int number;
	while (true){
	cout<<"Enter the number:"<<endl;
	cin>>number;
	switch(number>0){
		case 1:
			cout<<"Positive"<<endl;
			break;
		case 0:
			switch (number == 0){
				case 1:
					cout<<"Zero"<<endl;
					break;
				case 0:
					cout<<"Negative"<<endl;
					break;
		default:
			cout<<"Invalid Value."<<endl;
			}
	}
	getch();
	system("CLS");
}
}
