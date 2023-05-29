#include <iostream>
using namespace std;

int main(){
	int r; 
	cout<<"Enter Number: ";
	cin>>r;
	for (int i=r ; i>= 1 ; i--){
		for (int j = 1 ; j <= i ; j++){
			cout<<j;
		}
		for (int s=((r-i)+(r-i-1)); s>0 ; s--){
			cout<<" ";
		}
		if (i == r){
			for (int k=r-1 ; k>=1 ; k--){
				cout<<k;
			}
		}
		else {
			for (int k = i ; k>=1 ; k--){
				cout<<k;
			}
		}
		cout<<endl;
	}
	
}
