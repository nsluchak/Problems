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

	int year;
	cin >> year;
	bool isLeapYear = false;
	if(year == 1918) {
		cout << "26.09.1918" << endl;
	} else {
		if(year < 1918)
			isLeapYear = year%4 == 0;
		else if (year > 1918)
			isLeapYear = year%400 == 0 || (year%4 == 0 && year%100 != 0);		
		if(isLeapYear)
			cout << "12.09." << year << endl;
		else
			cout << "13.09." << year << endl;
	}
	return 0;
}