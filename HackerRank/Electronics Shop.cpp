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

	int b, kz, uz;
	cin >> b >> kz >> uz;
	int* k = new int[kz];
	int* u = new int[uz];
	REP(i, kz){
		int in;
		cin>>in;
		k[i] = in;
	}
	REP(i, uz){
		int in;
		cin>>in;
		u[i] = in;
	}
	int out = -1;
	REP(i, kz) {
		REP(j, uz){
			int t = k[i] + u[j];
			if(t > out && t <= b)
				out = t;
		}
	}

	cout << out << endl;

	delete[] k;
	delete[] u;

	return 0;
}