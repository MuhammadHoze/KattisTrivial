#include <bits/stdc++.h>
using namespace std;

int main(void){

	int n;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		int x;
		
		cin >> x;
		
		if(x % 2 == 0){
			
			cout << x << " is even" << endl;		
		}
		else
			cout << x << " is odd" << endl;
		
		
	}


	return 0;
	
}
