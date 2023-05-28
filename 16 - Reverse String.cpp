#include <iostream>
using namespace std;

int main(){
	string str;
	int len;
	cout<<"Enter String: "<<endl;
	getline(cin,str);
	len = str.length();
	string str_arr[len];

	for (int j = 0; j<len ; j++){
		str_arr[j] = str[len-(j+1)];
	}
	cout<<"Reversed String: "<<endl;
	for (int k = 0; k <len ; k++){
		cout<<str_arr[k];
	}
	return 0;
}
