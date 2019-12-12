#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n,h,v;
	int v2,h2;
	
	int value1,value2,value3,value4;
	
	vector<int> area;
	
	cin >> n >> h >> v;
	
	h2 = n - h;
	v2 = n - v;
	
	value1 = h * v;
	value2 = h2 * v;
	value3 = h * v2;
	value4 = h2 * v2;
	
	area.push_back(value1);
	area.push_back(value2);
	area.push_back(value3);
	area.push_back(value4);
		
	sort(area.begin(), area.end(), greater<int>());
	
	cout << area[0] * 4 ;
		
	
	return 0;
}
