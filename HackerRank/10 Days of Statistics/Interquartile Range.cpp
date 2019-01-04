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
	vector<int> nums, sorted_nums;
	cin >> n;
	REP(i, n) {
		int in;
		cin >> in;
		nums.push_back(in);	
	}
	REP(i, n) {
		int in;
		cin >> in;	
		REP(k, in) sorted_nums.push_back(nums[i]);
	}
	std::sort(sorted_nums.begin(),sorted_nums.end());
	n = sorted_nums.size();
	double q1, median, q3;
	int m1,m2,l1,l2,r1,r2;
	m1 = (n-1)/2; 											// left median
	m2 = n/2; 												// right median
	l1 = m1/2;												// left 1st quartile
	r1 = m2/2;												// right 1st quartile
	l2 = m2 + m1 - r1; 										// left 3rd quartile
	r2 = m2 + m1 - l1; 										// right 3rd quartile
	q1 = (double)(sorted_nums[l1]+sorted_nums[r1])/2;		// 1st quartile
	q3 = (double)(sorted_nums[l2]+sorted_nums[r2])/2;		// 3rd quartile

	cout << setprecision(1) << std::fixed << q3 - q1 << endl;

	return 0;
}