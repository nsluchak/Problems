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
#define REP(i, n) for(int i = 0; i < n; ++ i)

using namespace std;

//ifndef ONLINE_JUDGE doesn't work for HackerRank..

int main() {
	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int sum, seglen, n;
	cin >>n;
	int* nums = new int[n];
	REP(i, n) {
		int in;
		cin >> in;
		nums[i] = in;
	}
	cin >> sum >> seglen;
	queue<int> seg;
	int count = 0, running_sum = 0;
	REP(i, n) {
		int num = nums[i];
		running_sum += num;
		seg.push(num);
		if(seg.size() > seglen) {
			running_sum -= seg.front();
			seg.pop();
		}
		if(running_sum == sum && seg.size() == seglen)
			++ count;
	}
	
	delete[] nums;
	cout << count;

	return 0;
}