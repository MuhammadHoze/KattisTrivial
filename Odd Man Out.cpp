#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n,g;
	int count = 1; // for case number
	vector<long long> code;
	
	cin >> n;
	
	while(n--){
		
		cin >> g;
		
		while(g--){
			
			long long value;
			
			cin >> value;
			
			code.push_back(value);
				
		}
		
		sort(code.begin(), code.end());
			
//			for(auto v : code){
//				
//				cout << v << " ";
//			}
//			
//			cout << endl;
				
		for(int k=0; k<=code.size()-1; ){
			
			
			if (k != code.size()-1){
				
				if(code[k] == code[k+1]){
				
					k +=2;	
				}
				else{
					
					cout << "Case #" << count << ": " << code[k];
					count++; //important for the case number
					break;
				}
			}	
			else{

				cout << "Case #" << count << ": " << code[code.size()-1];
				count++;
				break;
			}
		}
			
		cout << endl;

		code.clear();
		
	}
	
	return 0;
}
