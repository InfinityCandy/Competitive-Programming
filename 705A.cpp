#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string fealing = "";
	
	cin>>n;
	
	for(int i = 1; i <= n; i++) {
		if(i != 1) {
			fealing = fealing + "that ";
		}
		
		if(i%2 == 0) {
			fealing = fealing + "I love ";
		}
		else {
			fealing = fealing + "I hate ";
		}
	}
	
	fealing = fealing + "it";
	
	cout<<fealing;
}
