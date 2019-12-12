#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	
	cin >> n;
	
	while(n--){
		
		int b;
		float p;
		float bpm, abpm;
		float max, min;
		
		cin >> b >> p;
		
		bpm = (60 * b) / p ;
		abpm = 60 / p ;
		
		min = bpm - abpm;
		max = bpm + abpm;
		
		cout << fixed << setprecision(4) << min << " " <<  bpm << " " <<  max << endl;

	}	
		
	return 0;
}
