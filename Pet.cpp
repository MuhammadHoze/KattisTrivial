#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	multimap<int,int,greater<int> > grade;
	
	for(int i=1; i<=5; i++){ // for contestants
		
		int a,b,c,d;
		int total;
		int contestant;
		
		contestant = i;
		cin >> a >> b >> c >> d;
		
		total = a + b + c + d;
		
		grade.insert(make_pair(total, contestant));
		//grade[total] = contestant;	
		
	}

    cout << grade.begin()->second << " " << grade.begin()->first << endl; // to print the first (key/value) entry of multimap

	
	return 0;
}
