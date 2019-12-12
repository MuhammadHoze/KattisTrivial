#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	
	double x;
	double result;
	
	cin >> x;
	
	result = x * 1000 * (5280.0/4854);
	
	
	cout << fixed << setprecision(0) <<  result;
	
	
	
	
	return 0;
}
