#include <iostream>
using namespace std;

int main(){
	int hr1, min1, hr2 ,min2, mins;
	char colon;
	string am_pm1, am_pm2;
	cout<<"First Time (hr:min am/pm): ";
	cin>>hr1>>colon>>min1>>am_pm1;
	if (am_pm1 == "pm"){
		hr1 += 12;
	}
	cout<<"Second Time (hr:min am/pm): ";
	cin>>hr2>>colon>>min2>>am_pm2;
	if (am_pm2 == "pm"){
		hr2 += 12;
	}
	min1 = (hr1*60) + min1;
	min2 = (hr2*60) + min2;
	mins = min2 - min1;
	if (mins<0){
		mins = mins*-1;
	}
	cout<<"Minutes between "<<hr1<<":"<<min1<<am_pm1<<" to "<<hr2<<":"<<min2<<am_pm2<<": "<<endl;
	cout<<mins;
	return 0;
}

