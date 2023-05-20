#include <iostream>
using namespace std;

int main(){
	int sub1,sub2,sub3;
	int average;
	cout<<"Enter the marks obtained in these subjects:"<<endl;
	cin>>sub1>>sub2>>sub3;
	average = float(sub1+sub2+sub3)/3.0;
	cout<<"The Average marks obtained: "<<endl;
	switch (average/10) {
		case 9:
			cout<<"A Grade";
			break;
		case 8:
			cout<<"B Grade";
			break;
		case 7:
			cout<<"C Grade";
			break;
		case 6:
		case 5:
			cout<<"D Grade";
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout<<"F Grade";
			break;
		default: 
			cout<<"Invalid input.";
			
	}
}

