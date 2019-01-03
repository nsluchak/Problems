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
#include <iomanip>
#define ll long long
#define FOR(i, j, n) for(int i = j; i < n; ++ i)
#define REP(i, n) for(int i = 0; i < n; ++ i)

using namespace std;

//ifndef ONLINE_JUDGE doesn't work for HackerRank..

int main() {
	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int n,  sum1 =0, sum2=0;
	cin >> n;
	vector<int> nums;
	REP(i, n) {
		int in;
		cin >> in;
		nums.push_back(in);
	}
	REP(i, n) {
		int in;
		cin >> in;
		sum1+=nums[i]*in;
		sum2+=in;
	}

	double weighted_mean = (double) sum1/sum2;
	cout << setprecision(1) << fixed;
	cout << weighted_mean << endl;

	return 0;
}	