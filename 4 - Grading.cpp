#include <iostream>
using namespace std;

int main(){
	int sub1,sub2,sub3;
//	int t_subjects;
	float average;
//	cout<<"How many subjects you have?"<<endl;
//	cin>>t_subjects;
	cout<<"=> Enter the marks obtained in three subjects: "<<endl;
	cin>>sub1>>sub2>>sub3;
	average = float(sub1+sub2+sub3)/3.0;
	cout<<"=> Your Average marks in these three subjects: "<<average<<endl;
	if (average >= 90.0) {
		cout<<"A Grade";
	}
	else if (average >= 80.0){
		cout<<"B Grade";
	}
	else if (average >= 70.0) {
		cout<<"C Grade";
	}
	else if (average >= 50.0) {
		cout<<"D Grade";
	}
	else if (average < 50.0) {
		cout<<"F Grade";
	}
	else {
		cout<<"=> Enter Valid input";
	}
	cout<<endl<<"<<<<<<=========================================>>>>>>";
}

