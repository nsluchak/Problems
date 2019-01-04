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

	int n;
	double mean=0, stdev=0;
	vector<int> nums;
	cin >> n;
	REP(i, n) {
		int in;
		cin >> in;
		nums.push_back(in);
		mean+=in;
	}
	mean/=n;
	REP(i, n) stdev+= pow((nums[i]-mean),2);
	stdev/=n;
	stdev = sqrt(stdev);
	cout << setprecision(1) << std::fixed << stdev << endl;
	return 0;
}