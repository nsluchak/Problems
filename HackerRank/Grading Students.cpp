#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		int grade;
		cin >> grade;
		if(grade > 37 && grade % 5 > 2)  
			grade += 5 - (grade%5);
		cout << grade << endl;
	}

	return 0;
}