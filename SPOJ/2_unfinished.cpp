#include <bits/stdc++.h>

using namespace std;

vector<int> sieve_simple(int n);
vector<int> sieve_altered(int n, int min);

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin >> t;
	for(int i = 0; i < t; ++ i)
	{
		int min,n;
		cin>>min>>n;
		vector<int> primes = sieve_altered(n, min);
		for(int prime: primes)
			cout << prime << endl;
		cout << endl;
	}

	
	return 0;
}
vector<int> sieve_simple(int n) {
	vector<int> prime;
	vector<int> isPrime(n+1);
	vector<int> spf(n+1);
	for(int i=2)
}

vector<int> sieve_altered(int n, int min) {
	vector<int> prime;
	vector<int> isPrime(n-min+1);
	vector<int> spf(n-min+1);
	for(int i=min; i<=n; ++ i) {
		int k = i-min;
		if(!isPrime[k]&&isPrime_(i)) {
			prime.push_back(i);
			spf[k]=i;
		}
		for(int j = 0; j < prime.size() && (i*prime[j])-min <= (n-min)+1
			&& prime[j] <= spf[k]; ++ j) {
			isPrime[(i*prime[j])-min]=true;

			spf[(i*prime[j])-min] = prime[j];
		}
	}
	return prime;
}