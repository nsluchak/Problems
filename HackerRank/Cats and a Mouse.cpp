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

	int n, a, b, c;
	cin >> n;
	REP(i, n) {
		cin >> a >> b >> c;
		int x1 = abs(a-c), x2 = abs(b-c);
		if(x1 == x2)
			cout << "Mouse C"<<endl;
		else if(x1 > x2)
			cout << "Cat B" <<endl;
		else
			cout << "Cat A"<<endl;
	}

	return 0;
}