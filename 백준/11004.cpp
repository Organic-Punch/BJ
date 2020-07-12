#include <bits/stdc++.h>
//º¸·ù
using namespace std;

#define ll long long

int main() {
	ll N, K; cin >> N >> K;
	vector<ll>arr(N+1,0);
	for (ll i = 0; i < N; i++) {
		ll temp; cin >> temp;
		arr[temp]++;
	}
	ll cnt = 1;
	for (ll i = 0; i < arr.size(); i++) {
		if (arr[i] == 0) continue;
		if (arr[i] != 0 && cnt == K) {
			cout << i; return 0;
		}
		else cnt++;
	}
	return 0;
}
