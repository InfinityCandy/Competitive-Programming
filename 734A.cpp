#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	vector <char> v;
	int anton = 0;
	int danik = 0;
	
	
	cin>>n;
	for(int i = 0; i < n; i++) {
		char temp;
		cin>>temp;
		v.push_back(temp);
	}
	
	
	for(int i = 0; i < n; i++) {
		if(v[i] == 'A') {
			anton += 1;
		}
		if(v[i] == 'D') {
			danik += 1; 
		}
	}
	
	if(anton > danik) {
		cout<<"Anton";
	}
	if(danik > anton) {
		cout<<"Danik";
	}
	if(danik == anton) {
		cout<<"Friendship";
	}
	
}
