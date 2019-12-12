#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	while(n--){
		
		string s1;
		string s2;
		
		cin >> s1;
		cin >> s2;
		
		cout << s1 << endl;
		cout << s2 << endl;
		for(int i=0; i<s1.size(); i++){
			
			if (s1[i] != s2[i]){
				
				cout << "*";
			}
			else
				cout << ".";
		}
		
		cout << endl << endl;	
	
	}
	
	return 0;
}


