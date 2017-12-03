#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
int temp;

int main() {
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		cin>>temp;
		
		v.push_back(temp);
	}
	
	int count = 0;
	for(int i = 1; i < n-1; i++) {
		if(v[i] < v[i+1] && v[i] < v[i-1]) {
			count += 1;
		}
		else if(v[i] > v[i+1] && v[i] > v[i-1]) {
			count += 1;
		}
	}
	
	cout<<count;
}
