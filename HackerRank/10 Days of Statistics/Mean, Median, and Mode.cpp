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

	double n, sum = 0, max = 0, mode, median, mean;
	map<int, int> freq;
	cin >> n;
	REP(i, n) {
		int in;
		cin >> in;
		if(++freq[in] > max || (freq[in] == max && in < mode)) {
		 mode = in;
		 max = freq[in];
		}
		sum+=in;
	}
	
	auto ib = freq.begin();
	auto ir = freq.rbegin();
	for(int i = 0; i < n/2;i+=(ib->second)) ib++;
	for(int i = 0; i < n/2;i+=(ir->second)) ir++;

	double m1=ib->first, m2=ir->first;
	median = (m1+m2)/2;
	mean = sum/n;

	cout << mean << endl; // mean
	cout << median << endl; //median
	cout << mode << endl; //mode

	return 0;
}