#include <iostream>
#include <string>
using namespace std;
int encryption(){
	string plain_text;
	plain_text.clear();
	cout<<"Enter the Plain Text: "<<endl;
	cin.ignore();
	getline(cin, plain_text);
	int len = 1;
	for (int i = 0; i<(int) plain_text.length() ; i++){
		if (plain_text[i]==' '){
			len++;
		}
	}
	string word;
	word.clear();
	string arr[len];
	int j = 0;
	for (int i=0 ; i<(int) plain_text.length();i++){
		
		if (plain_text[i] != ' '){
			word.push_back(plain_text[i]);
		}
		
		if (plain_text[i] == ' '){
			arr[j] = word;

			j++;
			word.clear();
		}
		if (i == (int) plain_text.length()-1){
			arr[j] = word;
		}

	}
	string reversed_arr[len];
	int var1 = 0;
	for (int index = len-1; index>=0 ; index-- ){
		
		reversed_arr[var1] = arr[index];

		var1++;
	}
	string secret_key;
	secret_key.clear();
	cout<<"Enter the Secret key: ";
	cin>>secret_key;
	int numeric_key[secret_key.length()-1];
	for (int i= 0 ; i < (int) secret_key.length() ; i++) {
		numeric_key[i] = int(secret_key[i]) - 96;
	}
	cout<<endl;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string var2;
	int num = 0;
	string mirza_cypher_text;
	for (int l = 0 ; l < len ; l++){
		
		var2 = reversed_arr[l];
		int no = l;
		if (no>(int)(secret_key.length()-1)){
			no = no-secret_key.length();
		}
		for (int j = 0 ; j<= (int) var2.length() ; j++){
			if (isalpha(var2[j])){
				
				num = int(var2[j]) - 96;
				
				num += int(numeric_key[no]);
				if (num>26){
					num = num - 26;
				}
				var2[j] = alphabet[num-1];
		}
			var2[j] = var2[j];
			num = 0;
		}
		
		mirza_cypher_text.append(var2);
		mirza_cypher_text.append(" ");
	}
	cout<<"Mirza_Cypher Text: "<<mirza_cypher_text;
	return 0;
}

int decryption(){
	string cypher_text;
	cout<<"Enter the Mirza_Cypher Text: "<<endl;
	cin.ignore();
	getline(cin, cypher_text);
	int len = 1;
	for (int i = 0; i<(int)cypher_text.length() ; i++){
		if (cypher_text[i]==' '){
			len++;
		}
	}
	
	string word;
	string arr[len];
	int j = 0;
	for (int i=0 ; i<(int)cypher_text.length();i++){
		
		if (cypher_text[i] != ' '){
			word.push_back(cypher_text[i]);
		}
		
		if (cypher_text[i] == ' '){
			arr[j] = word;
			j++;
			word.clear();
		}
		if (i == (int) cypher_text.length()-1){
			arr[j] = word;
		}
		
		
	}

	string secret_key;

	cout<<"Enter the Secret key: ";
	cin>>secret_key;
	int numeric_key[secret_key.length()-1];
	for (int i= 0 ; i < (int) secret_key.length() ; i++) {
		numeric_key[i] = int(secret_key[i]) - 96;
	}
	cout<<endl;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string var2;
	
	int num;
	string plain_text;
	plain_text.clear();
	string arr2[len];
	for (int l = 0 ; l < len ; l++){
		
		var2 = arr[l];
		int no = l;
		if (no>(int) (secret_key.length()-1)){
			no = (no-secret_key.length());
		}
		for (int j = 0 ; j<=(int) var2.length() ; j++){
			if (isalpha(var2[j])){
				
				num = int(var2[j]) - 96;
				
				num -= int(numeric_key[no]);
				if (num<=0){
					num += 26;
				}

				var2[j] = alphabet[num-1];
		}
			var2[j] = var2[j];
			num = 0;
		}
		
		arr2[l] = var2;
	}
	
	string reversed_arr[len];
	int var1 = 0;
	for (int index = len-1; index>=0 ; index-- ){

		reversed_arr[var1] = arr2[index];

		var1++;
	}
	
	for (int index = 0; index<len ; index++ ){
		plain_text.append(reversed_arr[index]);
		plain_text.append(" ");
	}

	cout<<"Plain Text: "<<plain_text;
	return 0;
}

int main(){
	system("color 80");				// Font color and background color
	long what;
	cout<<"===>>> Mirza_Cypher Technique (By Mirza Areeb Baig) <<<==="<<endl;
	cout<<"What do you want to perform? "<<endl
	<<"1) Encryption "<<endl
	<<"2) Decryption "<<endl
	<<"3) Exit"<<endl
	<<"=>";
	cin>>what;
	while (what<1 && what>3){
		cout<<"Invalid Option"<<endl;
		cin>>what;
	}
	switch (what){
		case 1:

			encryption();
			break;
		case 2:

			decryption();
			break;
		case 3:
			cout<<"Exiting..."<<endl;
			break;
		default:
			cout<<"Invalid Option";
	}
	char con;
	cout<<"\nDo you want to continue? (y/n): "<<endl;
	cin>>con;
	switch (con== 'y' || con == 'Y'){
		case 1:
			system("CLS");
			main();
			break;
		default:
			cout<<"Thanks for using :)"<<endl;
			break;
	}
	return 0;
}
