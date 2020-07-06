#include <bits/stdc++.h>

using namespace std;

#define tisi tuple<int,string,int>

inline bool cmp(tisi a, tisi b) {
	if ((get<0>(a) < get<0>(b)) || (get<0>(a) == get<0>(b) && get<2>(a) < get<2>(b)))return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N; cin >> N;
	vector<tisi>arr(N);
	for (int i = 0; i < N; i++) {
		int a; string temp;
		cin >> a >> temp;
		arr[i] = make_tuple(a, temp, i);
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < N; i++) cout << get<0>(arr[i]) << ' ' << get<1>(arr[i]) << '\n';
	return 0;
}