#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	long long m;
	vector <char> v;
	
	cin>>n;
	cin>>m;
	
	for(int i = 0; i < n; i++) {
		char temp;
		cin>>temp;
		v.push_back(temp);
	}
	
	for(int i = 0; i < m; i++) {
		long long l;
		long long r;
		char cOne;
		char cTwo;
		
		cin>>l;
		cin>>r;
		cin>>cOne;
		cin>>cTwo;
		
		for(int x = (l - 1); x <= (r-1); x++) {
			if(v[x] == cOne) {
				v[x] = cTwo;
			}
		}
		
	}
	
	for(int i = 0; i < n; i++) {
		cout<<v[i];
	}
}
