#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int k;
	int count = 0;
	int solved = 0;
	vector <int> problems;
	
	cin>>n>>k;
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin>>temp;
		problems.push_back(temp);
	}
	
	while(true) {
		if(problems[0] <= k) {
			problems.erase(problems.begin());
			solved = solved + 1;
			count = 1;
		}
		else {
			count = count + 1;
		}
		
		if(count == 1 && problems.size() != 0) {
			if(problems[problems.size() - 1] <= k) {
				problems.pop_back();
				solved = solved + 1;
				count = 0;
			}
			else {
				count = count + 1;
			}
			
		}
		
		if(count == 3 || problems.size() == 0) {
			break;
		}
	}

	cout<<solved;
}
