#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	int count = 0;
	
	vector<string> odd;
	vector<string> even;
	
	cin >> n;
	
	while (n != 0){
		
		count++;
		for(int i=0; i<n; i++){
			
			string input;
			
			cin >> input;
			
			if(i % 2 == 0)
				even.push_back(input);
			else
				odd.push_back(input);
			
		}
		
		reverse(odd.begin(), odd.end()); 
		 
		cout << "SET "<< count << endl;
		 
		for(auto v: even){
		 	
		 	cout << v << endl;
		}
		 
		for(auto x : odd){
		 	
		 	cout << x << endl;
		}
	
		cin >> n;
		
		odd.clear();
		even.clear();
	}	
	
	return 0;
}
