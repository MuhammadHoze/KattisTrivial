#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	float cost; // cost of 1 sq m
	float sum = 0; // total cost
		
	cin >> cost;
	cin >> n; //num of lawns
	
	while(n--){
				
		float width,length;
		float total;

		
		cin >> width >> length;
		
		total = width * length; // total area
		
		sum += (total * cost);
			
		
	}
	
	cout << fixed << setprecision(8) << sum << endl;
	
	return 0;
}
