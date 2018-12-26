#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ll long long
#define FOR(i, j, n) for(int i = j; i < n; ++ i)
#define REP(i, n) for(int i = 0; i < n; ++ i)

using namespace std;

//ifndef ONLINE_JUDGE doesn't work for HackerRank..

int main() {

	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int vals[26] = {};
	REP(i, 26) {
		int in;
		cin>>in;
		vals[i] = in;
	}

	string word;
	int m = 1;
	cin >> word;
	for(string::iterator it = word.begin(); it < word.end(); ++it) {
		int ind = 26-(123 - *it);
		if(vals[ind] > m)
			m = vals[ind];
	}
	cout << m*word.length() << endl;

	return 0;
}