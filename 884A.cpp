#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n, t;
	long long temp;
	long long remainingTime = 0;
	int minDay; 
	
	cin>> n >> t;
	
	for(int i = 0; i < n; i++) {
		cin>>temp;
		remainingTime =  remainingTime + (86400 - temp);
		
		if(remainingTime >= t) {
			minDay = i + 1;
			break;
		}
	}
	
	cout<<minDay;
}
