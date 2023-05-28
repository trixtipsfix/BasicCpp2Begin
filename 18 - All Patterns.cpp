#include <iostream>
using namespace std;

// Prints Triangle
void triangle(){
	
	cout<<endl<<"\t>>>>> Triangle <<<<< "<<endl;
	char star= '*';
	int row1;
	cout<<endl<<"How man rows you want to print? "<<endl;
	cin>>row1;
	cout<<endl;
	char space = ' ';
	for (int i=(row1-1); i>=0 ; i--)
		{
		for (int j=i ; j >= 0 ; j--)
		{
			cout<<space;
		}
		for (int k = (i+1); k<= row1 ; k++ )
		{
				cout<<star<<space;
		}
		cout<<endl;
		}
}

// Prints Inverted Triangle
void inverted_tri(){
	cout<<endl<<"\t>>>>> Inverted Triangle <<<<< "<<endl;
	char star = '*', space = ' ';
	int row4;
	cout<<endl<<"How many rows you want to print? "<<endl;
	cin>>row4;
	cout<<endl;
	int var = row4;
	for (int i = 0 ; i<row4 ; i++ ){
		for (int j = i ; j>=0; j--){
			cout<<space;
		}
		for ( int k = var; k> 0 ; k--){
			cout<<star<<space;
		}
		var--;
		cout<<endl;
	}  
}
	
// Prints Right Triangle
void right_triangle(){
	cout<<endl<<"\t>>>>> Right Triangle <<<<< "<<endl;
	char star='*';
	int row2;
	cout<<endl<<"How many rows you want to print? "<<endl;
	cin>>row2;
	cout<<endl;
	for (int i = 0 ; i<row2 ; i++){
		for (int j=i ; j>=0 ; j--){
			cout<<star<<" ";
		}
		cout<<endl;
	}
}

// Prints Inverted Right Triangle
void inverted_right_tri(){
	cout<<endl<<"\t>>>>> Right Triangle <<<<< "<<endl;
	char star = '*';
	int row3;
	cout<<endl<<"How many rows you want to print? "<<endl;
	cin>>row3;
	cout<<endl;
	for (int i=row3 ; i>=0 ; i--){
		for (int j = i-1 ; j >= 0; j-- ){
			cout<<star<<" ";
		}
		cout<<endl;
	}
}

// Prints Daimond
void diamond(){
	cout<<endl<<"\t>>>>> Diamond <<<<< "<<endl;
	char star = '*';
	int row5;
	cout<<"How many rows you want to print? :"<<endl;
	cin>>row5;
	cout<<endl;
	char space = ' ';
	for (int i=(row5-1); i>=0 ; i--)
		{
		for (int j=i ; j >= 0 ; j--)
		{
			cout<<space;
		}
		for (int k = (i+1); k<= row5 ; k++ )
		{
				cout<<star<<space;
		}
		cout<<endl;
		}
	int var = row5;
	for (int i = 1 ; i<row5 ; i++ ){
		for (int j = i ; j>=0; j--){
			cout<<space;
		}
		for ( int k = var; k> 1 ; k--){
			cout<<star<<space;
		}
		var--;
		cout<<endl;
	}  
}

// Print Number Triangle
void num_tri(){
	cout<<endl<<"\t>>>>> Triangle <<<<< "<<endl;
	int nums = 0;
	int row1;
	cout<<endl<<"How man rows you want to print? "<<endl;
	cin>>row1;
	cout<<endl;
	
	char space = ' ';
	for (int i=(row1-1); i>=0 ; i--)
		{
		if (nums>=9){
			nums = 0;
		}
		int var = nums;
		for (int j=i ; j >= 0 ; j--)
		{
			
			cout<<space;
		}
		for (int k = (i+1); k<= row1 ; k++ )
		{
				var++;
				cout<<var<<space;
				if (var>=9){
			var = 0;
			}
		}
		cout<<endl;
		nums++;
		}
}

// Prints Flipped Right Triangle
void flip_r8_tri(){
	char star='*';
	char space = ' ';
	int rows;
	cout<<"How many rows you want to print? :"<<endl;
	cin>>rows;
	for (int i = rows ; i>= 0; i--){
			for (int j = i ; j >0 ; j--){
				cout<<star;
			}
			cout<<endl;
			for (int k = (rows - i) ; k >= 0 ; k--){
				cout<<space;
			}
	}
}

// Main Function
int main(){
	int what;
	cout<<"What pattern do you want to print?"<<endl
	<<"1) Triangle"<<endl
	<<"2) Inverted Triangle"<<endl
	<<"3) Right Triangle"<<endl
	<<"4) Inverted Right Triangle"<<endl
	<<"5) Diamond"<<endl
	<<"6) Number Triangle"<<endl
	<<"7) Flipped Right Triangle"<<endl
	<<"=>";
	cin>>what;
	switch (what){
		case 1:
			triangle();
			break;
		case 2:
			inverted_tri();
			break;
		case 3:
			right_triangle();
			break;
		case 4:
			inverted_right_tri();
			break;
		case 5:
			diamond();
			break;
		case 6:
			num_tri();
			break;
		case 7:
			flip_r8_tri();
			break;
		default:
			cout<<"Invalid Option"<<endl;
			break;
	}
	char con;
	cout<<endl<<"Do you want to continue? (y/n): ";
	cin>>con;
	if (con=='Y' || con == 'y'){
		system("ClS");
		main();
	}
	else{
		cout<<endl<<"Thanks For Using :)"<<endl;
	}
	return 0;
}
