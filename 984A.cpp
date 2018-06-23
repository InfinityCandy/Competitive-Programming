#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	vector <int> array;
	
	cin>>n;
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		array.push_back(temp);
	}
	
	sort(array.begin(), array.end());
	
	if(array.size()%2 != 0) {
		cout<<array[array.size()/2];
	}
	else {
		cout<<array[(array.size()/2)-1];
	}
}
