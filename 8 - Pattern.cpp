#include <iostream>
using namespace std;

int main(){
	int a= 1,b= 0 , row;
	cout<<"How many rows you want to print?"<<endl;
	cin>>row;
	int i=0; 
	while (i<row) {
		if (a%2 != 0 && b%2 == 0) {
			cout<<a<<" "<<b<<endl;
			i++;
		}
		a++;
		b++;
	}
}

