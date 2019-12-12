#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	int value;
	vector<int> number;
	
	
	cin >> n; //no .of TC
	
	while(n--){
		
		int sum = 0;
		cin >> value;
		
		while(value != 0){
			
			number.push_back(value);
			
			cin >> value;
		}
		
		for(int i=0; i<number.size()-1; i++){
			
			int difference;
			
			difference = number[i+1] - (2 * number[i]);
			
			if (difference > 0 ){
				
				sum += difference;
				
			}	
		}
		
		cout << sum << endl;
		number.clear();
	}
	
	return 0;
}
