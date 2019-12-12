#include <bits/stdc++.h>
using namespace std;

int main(void){

	int l,d,x;
	
	cin >> l >> d >> x;


	for(int i=l; i<=d; ++i){ // to find min (N)
		
		int summin = 0;
		int valuemin = i;
		
		while(valuemin != 0){
			
			summin += valuemin % 10; // to extract out last digit and add to sum
			
			valuemin /= 10; // divide and repeat if possible
		}
		if (summin == x){
			
			cout << i ;
			break;
		}
	}
	cout << endl;
	
	for(int j=d; j>=l; --j){  // to find max (M)
		
		int summax = 0;
		int valuemax = j;
		
		while(valuemax != 0){
			
			summax += valuemax % 10; // to extract out last digit and add to sum
			
			valuemax /= 10; // divide and repeat if possible
		}
		if (summax == x){
			
			cout << j ;
			break;
		}
	}

	return 0;
}
