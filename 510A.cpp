#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	bool flag = true;
	
	cin>>n>>m;
	
	for(int i = 0; i < n; i++) {
		
		if((i%2) == 0) {
			for(int x = 0; x < m; x++) {
				cout<<"#";
			}
				
		}
		else {
			if(flag == false) {
				cout<<"#";	
			}
			for(int x = 0; x < m - 1; x++) {
				cout<<".";
			}
			if(flag == false) {
				flag = true;
			}
			else{
				if(flag == true) {
					cout<<"#";
					flag = false;	
				}
			}

		}
		
		cout<<"\n";
	}
}
