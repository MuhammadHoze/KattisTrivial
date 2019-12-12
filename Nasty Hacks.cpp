#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		int r,e,c;
		int profit;
		
		cin >> r >> e >> c;
		
		profit = e - c;
		
		if (profit > r){
			
			cout << "advertise" << endl;
		}
		else if(profit == r){
			
			cout << "does not matter" << endl;
		}
		else
			cout << "do not advertise" << endl;
			
	}
		
	return 0;
}
