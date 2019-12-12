#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	char rank, suit;
	map<char,vector<char>> poker;  // 1 key and many values   A    (2,3,4) 
	map<char, vector<char>>::iterator it ; 
	
	vector<int> result;
	int n = 5;
	
	while(n--){
	
		cin >> rank >> suit;
		
		it = poker.find(rank);
		
		poker[rank].push_back(suit); // new or found entry will be added
					
	}
	
	//TRAVERSE A MAP 
	for(auto map_iter = poker.cbegin() ; map_iter != poker.cend() ; ++map_iter ){
		
		//cout << map_iter->second.size() << endl; // number of values in the vector of a specific key 	
		result.push_back(map_iter->second.size()); // push the size of vector into another vector
    }	
	
	sort(result.begin(), result.end(), greater<int>());
	cout << result[0] ;

	
	// TO SHOW THE VALUES CORRESPONDING TO THE KEY
	
//	for(auto map_iter = poker.cbegin() ; map_iter != poker.cend() ; ++map_iter){
//        
//            std::cout << "key: " << map_iter->first << "  value: [  " ;
//            for( auto vec_iter = map_iter->second.cbegin() ; vec_iter != map_iter->second.cend() ; ++vec_iter )
//                std::cout << *vec_iter << "  " ;
//            std::cout << "]\n" ;
//  }	
	
	
	
	return 0;
}
