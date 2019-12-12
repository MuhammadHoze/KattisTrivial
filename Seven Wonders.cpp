#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	string input;
	int points;
	
	//represents the count
	int t = 0;
	int g = 0;
	int c = 0;
	
	int repeat;
	
	cin >> input;	
		 
	for(int i=0; i<input.size(); i++){  //strlen(input)
			
		if (input[i] == 'T'){
			
			t++;
			
		}
		else if (input[i] == 'G'){
			
			g++;
		}
		else if (input[i] == 'C'){
			
			c++;
		}
	}
	
	//IMPORTANT!
	repeat = min(min(t,g),c);  // to get the min which will be used as repeated pairs of T G C
	
	points = pow(t,2) + pow(g,2) + pow(c,2) + (repeat * 7);	

	cout << points;

	return 0;
}
