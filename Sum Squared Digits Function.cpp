#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	while(n--){
		
		int k;
		int b,n;
		
		cin >> k >> b >> n;
		
		int sum = 0;
		
		while(n != 0){
			
			sum += (n % b) * (n % b);
			
			n /= b;
		}
		
		cout << k << " " << sum << endl;
	}
	
	return 0;
}
