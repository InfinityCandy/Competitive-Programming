#include <bits/stdc++.h>

using namespace std;

int main() {
	string dictionary [6][2] = {{"purple", "Power"}, {"green", "Time"}, {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"}};
	vector <string> haven;
	vector <string> notHaven;
	
	int n;
	
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		string temp;
		cin>>temp;
		haven.push_back(temp);
	}
	
	for(int i = 0; i < 6; i++) {
		bool flag = true;
		
		for(int j = 0; j < n; j++) {
			if(dictionary[i][0] == haven[j]) {
				flag = false;
			}
		}
		
		if(flag) {
			notHaven.push_back(dictionary[i][1]);
		}
	}
	
	cout<<notHaven.size()<<"\n";
	
	for(int i = 0; i < notHaven.size(); i++) {
		cout<<notHaven[i]<<"\n";
	}
}
