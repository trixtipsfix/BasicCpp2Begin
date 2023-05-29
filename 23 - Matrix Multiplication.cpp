#include <iostream>
#include <iomanip>
using namespace std;
int row1, row2, col1, col2;

void input(){
	cout<<"<==== First Matrix ====>"<<endl;
	cout<<"Row:";
	cin>>row1;
	cout<<"Column:";
	cin>>col1;
	cout<<"<==== Second Matrix ====>"<<endl;
	cout<<"Row:";
	cin>>row2;
	cout<<"Column:";
	cin>>col2;
}
int main(){
	input();
	while (col1 != row2){
		cout<<"These matrix can't be multiplied. Please make sure that you have entered the correct values."<<endl;
		input();
	}
	
	
	int arr1[row1][col1] , arr2[row2][col2], arr3[row1][col2] = {0};
	cout<<"Enter First Matrix:"<<endl;
	for (int i = 0 ; i<row1; i++){
		cout<<"Row "<<i+1<<endl;
		for (int j=0 ; j<col1; j++){
			cout<<"=>";
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter Second Matrix:"<<endl;
	for (int i = 0 ; i<row2; i++){
		cout<<"Row "<<i+1<<endl;
		for (int j=0 ; j<col2; j++){
			cout<<"=>";
			cin>>arr2[i][j];
		}
	}
	// Multiplication
	int var = 0;
	for (int i= 0 ; (i < row1) ; i++){
		for (int j = 0 ; j <col2 ; j++){
		
		var = 0;
		for (int k = 0 ; k < row2 ; k++){
			var += arr1[i][k]*arr2[k][j];
		}
		arr3[i][j] = var;
		}
	}	
	
	//Showing Results
	for (int i = 0 ; i <row1 ; i++){
		cout<<setw(2)<<"|";
		for (int j = 0 ; j < col2 ; j++){
			cout<<setw(3)<<arr3[i][j];
		}
		cout<<setw(2)<<"|";
		cout<<endl;
	}
	
	return 0;
}
