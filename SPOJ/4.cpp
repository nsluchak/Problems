#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin >> t;

	for(int i = 0; i < t; ++ i) {
		string str;
		cin >> str;
		stack<char> ops;
		for(char c: str) {
			if(c >='a' && c<='z')
				cout << c;
			else if (c == ')') {
				cout << ops.top();
				ops.pop();
			}
			else if (c != '(')
				ops.push(c);
		}
		cout << endl;
	}

	return 0;
}