#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int k;
	vector <int> v;
	int count = 0;
	
	cin>>n>>k;
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	
	for(int i = 0; i < n; i++) {
		if(k <= 0) {
			break;
		}
		else if(v[i] > 8 && i != v.size()) {
			k = k - 8;
			count = count + 1;
			v[i + 1] = v[i + 1] + (v[i] - 8);
		}
		else {
			k = k - v[i];
			count = count + 1;
		}
	}
	
	if(k > 0) {
		cout<<"-1";
	}
	else {
		cout<<count;
	}
	
}
