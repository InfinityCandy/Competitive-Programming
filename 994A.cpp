#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int m;
	vector <int> keys;
	vector <int> fingerprints;
	vector <int> pos;
	
	cin>>n>>m;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		keys.push_back(temp);
	}
	
	for(int i = 0; i < m; i++) {
		int temp;
		cin>>temp;
		fingerprints.push_back(temp);
	}
	
	for(int i = 0; i < m; i++) {
		for(int x = 0; x < n; x++) {
			if(fingerprints[i] == keys[x]) {
				pos.push_back(x);
			}
		}
	}
	
	
	if(pos.size() > 0) {
			sort(pos.begin(), pos.end());
	
		for(int i = 0; i < pos.size(); i++) {
			cout<<keys[pos[i]]<<" ";
		}
	}
	else {
		cout<<"";
	}

}
