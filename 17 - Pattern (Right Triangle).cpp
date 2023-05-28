#include <iostream>
using namespace std;

int main(){
	char star = '*';
	int row;
	cout<<"How many rows you want to print? "<<endl;
	cin>>row;
	for (int i=1;i<=row;i++){
		for (int j=1; j<=i;j++){
		cout<<star<<" ";
	}
	cout<<endl;
	}
}

