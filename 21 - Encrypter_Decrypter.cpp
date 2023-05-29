#include <iostream>
#include <string>
using namespace std;

string encrypt(){
	string plain_text;
	int shifts;
	cout<<"Enter Plain Text: "<<endl;
	cin>>plain_text;
	cout<<"How Many Shifts You Want? (1-25) :"<<endl;
	cin>>shifts;
	int len = plain_text.length();
	for (int i = len ; i>= 0 ; i--){
		plain_text[i] = plain_text[i] + shifts;
	}
	return plain_text;
}
int main(){
	
	int what;
	cout<<"What do you want to do? "<<endl
	<<"1) Encryption"<<endl
	<<"2) Decryption"<<endl
	<<"=>";
	cin>>what;
	switch (what){
		case 1:
			cout<<encrypt();
			break;
		case 2:
			cout<<"Not Ready Yet :((";
			break;
		default:
			cout<<"Invalid Option";
	}
	return 0;
}
