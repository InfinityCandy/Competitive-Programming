#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long remain = 0;
	vector<int> v;
	
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		remain += temp;
	}
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());
	
	long long lastTwo = v[n-1] + v[n-2];
	
	if(lastTwo >= remain) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	
	
}
