#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	vector<int> contain = {1,1,2,2,2,8};
	
	vector<int> input;
	
	vector<int> need;
	
	for(int i=0; i<6; i++){
		
		int value;
		cin >> value;
		
		input.push_back(value);
		
	}	
	
	for(int j=0; j<input.size(); j++){
		
		int req;
		req = contain[j] - input[j];
		
		need.push_back(req);
		
	}
	
	for(auto v: need){
		
		cout << v << " ";
	}

	return 0;
}
