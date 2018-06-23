#include <bits/stdc++.h>

using namespace std;

int main() {
	string camps;
	bool flag = false;
	
	cin>>camps;
	
	if(camps.size() > 2) {

		for(int i = 1; i <= camps.size() - 1; i++) {
			if(camps[i] == 'A'){
				if(camps[i-1] == 'B' && camps[i+1] == 'C') {
					flag = true;
					break;
				}
				else {
					if(camps[i-1] == 'C' && camps[i+1] == 'B') {
						flag = true;
						break;
					}
				}
			}
			
			if(camps[i] == 'B'){
				if(camps[i-1] == 'A' && camps[i+1] == 'C') {
					flag = true;
					break;
				}
				else {
					if(camps[i-1] == 'C' && camps[i+1] == 'A') {
						flag = true;
						break;
					}
				}
			}
			
			if(camps[i] == 'C'){
				if(camps[i-1] == 'B' && camps[i+1] == 'A') {
					flag = true;
					break;
				}
				else {
					if(camps[i-1] == 'A' && camps[i+1] == 'B') {
						flag = true;
						break;
					}
				}
			}
		}
	}
	
	if(flag) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
}
