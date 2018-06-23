#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	vector <char> s;
	
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		char temp;
		cin>>temp;
		s.push_back(temp);
	}
	
	
	for(int i = 1; i <= n; i++) {
		if((n%i) == 0) {
			reverse(s.begin(), s.begin() + i);
		}
	}
	
	for(int x = 0; x < n; x++) {
		cout<<s[x];
	}
	
}
