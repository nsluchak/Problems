#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);

	int x1,x2,xa,xo,as,os,ac = 0,oc = 0;
	cin >>x1>>x2>>xa>>xo>>as>>os;
	for(int i = 0; i < as; ++ i) {
		int a;
		cin>>a;
		int newx = xa+a;
		if(newx >= x1 && newx <= x2) 
			++ac;

	}
	for(int i = 0; i < os; ++ i) {
		int o;
		cin>>o;
		int newx = xo+o;
		if(newx >= x1 && newx <= x2)
			++oc;
	}
	cout << ac << endl << oc << endl;
	return 0;
}