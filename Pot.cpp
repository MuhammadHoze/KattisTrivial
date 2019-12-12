#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	int sum = 0;
	
	cin >> n;
	
	while(n--){
		
		int value;
		int lastdigit; // last digit of the value
		int correctnum; // all digits except the last
	
		cin >> value;
		
		lastdigit = value % 10; // to extract out the last digit
		correctnum = value / 10; 
		
		sum += pow(correctnum,lastdigit);
			
	}	

	cout << sum << endl;
	
	return 0;

}
