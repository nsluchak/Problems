#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime_(int n);
vector<ll> sieve_altered(int n, int min);

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
		vector<ll> primes = sieve_altered(n, min);
		for(ll prime: primes)
			cout << prime << endl;
		cout << endl;
	}

	
	return 0;
}

bool isPrime_(ll n) {
	if(n == 0 || n == 1)
		return false;
	for(ll i = 2; i*i <= n; ++ i)
		if(n%i == 0)
			return false;
	return true;
}

vector<ll> sieve_altered(int n, int min) {
	vector<ll> prime;
	vector<ll> isPrime(n-min+1);
	vector<ll> spf(n-min+1);
	for(ll i=min; i<=n; ++ i) {
		int k = i-min;
		if(!isPrime[k]&&isPrime_(i)) {
			prime.push_back(i);
			spf[k]=i;
		}
		for(ll j = 0; j < prime.size() && (i*prime[j])-min <= (n-min)+1
			&& prime[j] <= spf[k]; ++ j) {
			isPrime[(i*prime[j])-min]=true;

			spf[(i*prime[j])-min] = prime[j];
		}
	}
	return prime;
}