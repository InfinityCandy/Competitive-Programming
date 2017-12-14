#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string ans = "NO";
	
	cin>>n;
	
	int camels[n][2];
	
	for(int i = 0; i < n; i++) {
		int temp1;
		int temp2;
		
		cin>>temp1;
		cin>>temp2;
		
		camels[i][0] = temp1;
		camels[i][1] = temp2;		
	}
	
	for(int i = 0; i < n; i++) {
		for(int x = 0; x < n; x++) {
			if((camels[i][0] + camels[i][1]) == camels[x][0])
			{
				if(camels[x][0] + camels[x][1] == camels[i][0]) {
					ans = "YES";
					break;
				}
			}
		}
	}
	
	cout<<ans;
}
