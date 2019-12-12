#include <bits/stdc++.h>
using namespace std;

int main(void){


	int n;
	char b;
	int sum = 0;
		
	map<char, int> dominant;
	map<char, int> nodominant;
		
//	dominant['A'] = 11;
//	dominant['K'] = 4;
//	dominant['Q'] = 3;
//	dominant['J'] = 20;
//	dominant['T'] = 10;
//	dominant['9'] = 14;
//	dominant['8'] = 0;
//	dominant['7'] = 0;
//	
//	
//	nodominant['A'] = 11;
//	nodominant['K'] = 4;
//	nodominant['Q'] = 3;
//	nodominant['J'] = 2;
//	nodominant['T'] = 10;
//	nodominant['9'] = 0;
//	nodominant['8'] = 0;
//	nodominant['7'] = 0;

		 
    dominant.insert(pair<char, int>('A', 11)); 
    dominant.insert(pair<char, int>('K', 4)); 
    dominant.insert(pair<char, int>('Q', 3)); 
    dominant.insert(pair<char, int>('J', 20)); 
    dominant.insert(pair<char, int>('T', 10)); 
    dominant.insert(pair<char, int>('9', 14)); 
    dominant.insert(pair<char, int>('8', 0)); 
    dominant.insert(pair<char, int>('7', 0)); 
	
	nodominant.insert(pair<char, int>('A', 11)); 
    nodominant.insert(pair<char, int>('K', 4)); 
    nodominant.insert(pair<char, int>('Q', 3)); 
    nodominant.insert(pair<char, int>('J', 2)); 
    nodominant.insert(pair<char, int>('T', 10)); 
    nodominant.insert(pair<char, int>('9', 0)); 
    nodominant.insert(pair<char, int>('8', 0)); 
    nodominant.insert(pair<char, int>('7', 0)); 
	
	
	
	
	cin >> n >> b;	
	
	for(int i=0; i<(4*n); i++){
		
		char value, suit;
		
		cin >> value >> suit;
		
		if (suit == b){
			
			for (auto itr = dominant.find(value); itr != dominant.end(); itr++){
				
					sum += itr->second;
					//cout << sum << endl;
					break;
				;
	
			}
			
		}
		else
			for (auto itr = nodominant.find(value); itr != nodominant.end(); itr++){
				
					sum += itr->second;
					//cout << sum << endl;
					break;
			}
	}
	
	cout << sum;
	
	return 0;
}
