#include <iostream>
//#include <conio.h>

using namespace std;

int main(){
	int day;
	char condition = 'y';
	while (condition == 'y' || condition == 'Y') {      
	cout<<"Enter the day number (1-7): "<<endl;
	cin>>day;
	switch (day) {
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
		case 7:
			cout<<"Sunday"<<endl;
			break;
		default:
			cout<<"No Valid Option!!!"<<endl;
	}
	cout<<"Do you want to continue? (y/n): "<<endl;
	cin>>condition;
	system("cls");     // This clears the screen
//	getch();  // This pauses the screen.   	
}	
	cout<<"Thanks for using!!!";
	return 0;
}
