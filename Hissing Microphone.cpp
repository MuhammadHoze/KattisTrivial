#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	string input;
	string contain = "ss";
	
	cin >> input;
	
	if (strstr(input.c_str(),contain.c_str())){
		
		cout << "hiss" <<endl;
	}	
	else 
		cout << "no hiss" << endl;
	
	return 0;
}
