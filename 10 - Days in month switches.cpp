#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int month;
	string months[12] = {"January" , "February" , "March" , "April", "May" , "June", "July", "August", "September", "October" , "November", "December"};
	while (true) {
	cout<<"Enter the number of month:"<<endl;
	cin>>month;
	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"=> Month Name: "<<months[month-1]<<endl;
			cout<<"=> Days: 31"<<endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"=> Month Name: "<<months[month-1]<<endl;
			cout<<"=> Days: 30"<<endl;
			break;
		case 2:
			cout<<"=> Month Name: "<<months[month-1]<<endl;
			cout<<"=> Days: 28/29 "<<endl;
			break;
		default:
			cout<<"===> Invalid Option! <==="<<endl;
	}	
	getch();
	system("CLS");
}

	return 0;
}
