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

	int n, k;
	cin >> n >> k;
	int* remainders = new int[k]();
	REP(i, n) {
		int in;
		cin >> in;
		++ remainders[in%k];
	}
	int count = remainders[0];
	count *= count-1;
	count /= 2;
	FOR(i, 1, (k/2)+1) {
		if(i == k-i) {
			int calc = remainders[i];
			calc *= calc-1;
			calc /= 2;
			count += calc;
			break;
		}
		count += remainders[i] * remainders[k-i];
	}
	delete[] remainders;

	cout << count;

	return 0;
}