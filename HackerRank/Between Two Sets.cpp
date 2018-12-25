#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b);
int gcd(int* A, int a);

int lcm(int a, int b);
int lcm(int* A,int a);

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);

	int a, b;
	cin>>a>>b;
	int* A = new int[a];
	int* B = new int[b];
	for(int i = 0; i < a; ++i){
		int c;
		cin >> c;
		A[i] = c;
	}
	for(int i = 0; i < b; ++i){
		int c;
		cin >> c;
		B[i] = c;
	}

	int lcm_ = lcm(A,a);
	int gcd_ = gcd(B,b);

	delete[] A;
	delete[] B;
	
	int count = 0;

	for(int i = lcm_; i <= gcd_; i+=lcm_)
		if(gcd_ % i == 0) ++count;

	cout << count << endl;

	return 0;
}

int gcd(int a, int b) {
	int temp;
	while(b != 0) {
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int gcd(int* A, int a) {
	int gcd_ = A[0];
	for(int i = 1; i < a; ++ i) {
		gcd_ = gcd(gcd_, A[i]);
	}
	return gcd_;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int lcm(int* A, int a) {
	int lcm_ = A[0];
	for(int i = 1; i < a; ++i) {
		lcm_ = lcm(lcm_, A[i]);
	}
	return lcm_;
}