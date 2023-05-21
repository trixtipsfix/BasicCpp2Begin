#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char alpha;
	while (true) {
	cout<<"Enter alphabet: "<<endl;
	cin>>alpha;
	switch (alpha) {
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout<<"Vowel"<<endl;
			break;
		default:
			cout<<"Consonant"<<endl;
	}
	getch();
	system("cls");
}
}
