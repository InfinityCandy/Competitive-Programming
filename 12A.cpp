#include <bits/stdc++.h>

using namespace std;

int main() {
	vector <char> v;
	bool flag = true;
	
	
	for(int i = 0; i < 9; i++) {
		char temp;
		cin>>temp;
		v.push_back(temp);
	}
	
	for(int i = 0; i <= 5; i++) {
		if(v[i] != v[8-i]) {
			flag = false;
			break;
		}
	}
	
	if(flag) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
