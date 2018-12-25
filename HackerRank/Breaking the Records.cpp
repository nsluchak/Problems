#include <bits/stdc++.h>
#define ll long long
using namespace std;

//ifndef ONLINE_JUDGE doesn't work for HackerRank..

int main() {
	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int min=0,max=0,cmin=0,cmax=0;
	int n;
	cin >> n;
	cin >> min;
	max = min;
	for(int i = 1; i < n; ++ i) {
		int score;
		cin >> score;
		if(min > score) {
			min = score;
			++cmin;
		} else if(max < score) {
			max = score;
			++cmax;
		}
	}

	cout << cmax << " " << cmin << endl;

	return 0;
}