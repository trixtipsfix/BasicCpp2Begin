#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	int a, b, c, disc;
	float alpha, beta;
	cout<<"Enter 'a', 'b' and 'c' of Quad. Equation: "<<endl;
	cin>>a>>b>>c;
	disc = (b*b)-(4*a*c);
	
	switch (disc > 0){
		case 1:
			cout<<"Roots are Real and Unequal."<<endl;
			alpha = (-b + sqrt(disc))/(2*a);
			beta = (-b - sqrt(disc))/(2*a);
			cout<<"Roots are: "<<endl<<alpha<<endl<<beta<<endl;
			break;
		case 0:
			switch (disc == 0){
				case 1:
					cout<<"Roots are Real and Equal."<<endl;
					alpha  = (-b/(2*a));
					beta = alpha;
					cout<<"Roots are: "<<endl<<alpha<<endl<<beta<<endl;
					break;
				case 0:
					cout<<"Roots are Imaginary and Unequal."<<endl;
					alpha = (-b + sqrt(disc))/(2*a);
					beta = (-b - sqrt(disc))/(2*a);
					cout<<"Roots are: "<<endl<<alpha<<endl<<beta<<endl;
					break;
			}
		default:
			cout<<"Invalid Values!"<<endl;
	}
}
