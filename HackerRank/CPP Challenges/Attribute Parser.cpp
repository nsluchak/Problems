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
void parseAttributes(string tag, int it, string in, unordered_map<string, string> &tags);
string parseQuery(string in, unordered_map<string, string> &tags);
pair<string, int> readTag(string in);
int main() {
	freopen("input.txt", "r", stdin); //isn't included in submission
	freopen("output.txt","w",stdout); //isn't included in submission

	int n, q;
	cin >> n >> q >> std::ws;
	unordered_map<string, string> tags;
	string nestedTag = "";
	REP(i, n) {
		string in;
		getline(cin, in);
		pair<string, int> out = readTag(in);
		if(out.first[0] == '/') nestedTag.resize(nestedTag.size()-out.first.size());
		else {
			nestedTag += (out.first + ".");
			parseAttributes(nestedTag.substr(0,nestedTag.size()-1), out.second, in, tags);
		}
	}
	REP(i, q) {
		string query;
		cin >> query;
		cout << parseQuery(query, tags) << endl;
	}
	return 0;
}
void parseAttributes(string tag, int it, string in, unordered_map<string, string> &tags) {
	while(in[it] != '>') {
		string att_id = "", att_val = "";
		while(in[++it] != ' ') att_id +=in[it];
		it+=3; // skip the '= ''
		while(in[++it] != '"') att_val+=in[it];
		++ it; // skip the '"'
		tags[tag+"~"+att_id] = att_val;
	}
}
string parseQuery(string in, unordered_map<string, string> &tags){ 
	string result = tags[in];
	if(result=="") result = "Not Found!";
	return result;
}
pair<string, int> readTag(string in) {
	string tag_id="";
	int it = 0;
	while(in[++it] != ' ' && in[it] != '>') tag_id+=in[it];
	return MP(tag_id, it);
}