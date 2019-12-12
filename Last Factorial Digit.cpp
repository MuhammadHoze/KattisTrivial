#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	while(n--){ // number of TC 
		
		int value;
		int fact = 1;
		int result;
		
		cin >> value;
		
		for(int i = 1; i<=value; i++){
			
			fact = fact * i;
		}
		
		result = fact % 10; // to extract last digit
		
		cout << result << endl;
		
	}	

	return 0;
	
}
