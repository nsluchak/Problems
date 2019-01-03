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
#include <unordered_map>
#include <iomanip>
#define ll long long
#define FOR(i, j, n) for(int i = j; i < n; ++ i)
#define REP(i, n) for(int i = 0; i < n; ++ i)
#define MP(a, b) make_pair(a, b)

using namespace std;

//ifndef ONLINE_JUDGE doesn't work for HackerRank..

#define bounds pair<int, int>

struct pair_hash{
	size_t operator() (const bounds &p) const {
		size_t s = 173;
		s = s * 109 + p.first;
		s = s * 109 + p.second;
		return s;
	}
};

int ps_pair(int a, int b);
int ps(bounds range, vector<int> h, unordered_map<bounds,int, pair_hash> &rs);
int running_sum(bounds range, vector<int> h);

int main() {
	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int n, m;
	cin >> n >> m;
	vector<int> h;
	unordered_map<bounds, int, pair_hash> rs;
	REP(i, n) {
		int in;
		cin >> in;
		h.push_back(in);
	}
	/*REP(k, m) {
		int l, r, x;
		cin >> l >> r >> x;
		
	}*/

	int test = ps(MP(1, 6), h, rs);
	cout << test << endl;

	return 0;
}

int ps_pair(int a, int b) {
	return a * 2 + b * 2 + 2 * (a+b);
}

int ps(bounds range, vector<int> h, unordered_map<bounds,int,pair_hash> &rs) {
	try {
		return rs.at(range);
	} catch (out_of_range e) {
		int l = range.first;
		int r = range.second;
		if(l==r) 
			rs[range] = h[l-1] * 2;
		else if(r - l == 1) {
			rs[range] = ps_pair(h[l-1], h[r-1]);
			cout << "[" << l << ", " << r << "] +" << endl;
		}
		else {
			bounds new_range = MP(l, r-1);
			cout <<" + rs(" << l << ", " << r << ") - MP(" 
			<< r-1 << ") + ";
			rs[range] = ps(MP(r-1,r), h, rs) + running_sum(range, h)
			 - ps(MP(r-1,r-1), h, rs) + ps(new_range, h, rs);
		}
		return rs[range];
	}	
}

int running_sum(bounds range, vector<int> h) {
	int l = range.first;
	int r = range.second;
	int sum = 0;
	REP(i, (r-l)-1) {
		sum += 2 * (h[(l-1)+i] + h[(r-1)]);
	}
	return sum;
}
