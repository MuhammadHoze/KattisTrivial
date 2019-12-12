#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	string month;
	int date;
	
	cin >> month >> date;
	
	if ((month == "OCT" && date == 31) || (month == "DEC" && date == 25)){
			
		cout << "yup";
	}	
	else
		cout << "nope";
	
	
	return 0;
	
}
