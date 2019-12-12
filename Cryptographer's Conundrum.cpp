#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	string input;
	int sum = 0;
	
	cin >> input;
	
	for(int i=0; i<input.size(); i++){
		
		if (i % 3 == 0 && input[i] != 'P'){
			
			sum++;
		}
		else if (i % 3 == 1 && input[i] != 'E'){
			
			sum++;
		}
		else if (i % 3 == 2 && input[i] != 'R'){
			
			sum++;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
