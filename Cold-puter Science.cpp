#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	int count = 0;
	
	cin >> n;
	
	while(n--){
		
		int value;
	
		cin >> value;
	
		if (value < 0){
		
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
