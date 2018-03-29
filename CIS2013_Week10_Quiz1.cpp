#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	string user_line;
	int count = 1;
	 
	cout << "Type something: ";
	getline(cin, user_line);
	int a=user_line.length();

	for (int i=0; i<a; i++){
		if ((user_line[i]=='b')&&(count%2==1)){
			user_line[i]='S';
			cout << user_line[i] << "IT";
			count++;
		}
		else if ((user_line[i]=='b')&&(count%2==0)){
			user_line[i]='S';
			cout << user_line[i] << "TAND";
			count++;
		}
		else{cout << user_line[i];}
	}
	
	return 0;
}
