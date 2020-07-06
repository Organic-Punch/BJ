#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

bool cmp(pii a, pii b) {
	if ((a.first < b.first) || (a.first == b.first && a.second < b.second)) return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N; cin >> N;
	vector<pii>arr(N, {0,0});
	for (int i = 0; i < N; i++) cin >> arr[i].first >> arr[i].second;
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < N; i++) cout << arr[i].first << ' ' << arr[i].second << '\n';
	return 0;
}