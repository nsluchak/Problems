#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> sieve(int n, int min);

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin >> t;

	for(int i = 0; i < t; ++ i)
	{
		ll min,n;
		cin>>min>>n;
		vector<ll> primes = sieve(n, min);
		for(ll prime: primes)
			cout << prime << endl;
		cout << endl;
	}

	
	return 0;
}

vector<ll> sieve(int n, int min) {
	vector<ll> prime;
	vector<ll> final;
	vector<bool> isPrime(n+1);
	vector<ll> spf(n+1);

	isPrime[0]=isPrime[1]=true;

	for(ll i=2; i<=n; ++ i) {
		if(!isPrime[i]) {
			prime.push_back(i);
			if(i >= min)
				final.push_back(i);
			spf[i]=i;
		}

		for(ll j = 0; j < prime.size() && i*prime[j] <= n
			&& prime[j] <= spf[i]; ++ j) {
			isPrime[i*prime[j]]=true;

			spf[i*prime[j]] = prime[j];
		}
	}

	return final;
}