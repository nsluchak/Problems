#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);

	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	if(x1 == x2 || (v1-v2)!= 0 && (x2 - x1)%(v1-v2) == 0 && ((x2-x1)/(v1-v2))>0)
		cout << "YES" <<endl;
	else
		cout <<"NO"<<endl;
	return 0;

}