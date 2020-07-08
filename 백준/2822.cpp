#include <bits/stdc++.h>
using namespace std;
inline bool cmp(pair<int, int>a, pair<int, int>b) {
	return a.second < b.second ? true : false;
}
int main() {
	vector<pair<int, int>>arr;
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		int a; cin >> a;
		arr.push_back({ a,i+1 });
	}
	sort(arr.begin(), arr.end());
	for (int i = 7; i >= 3; i--) sum += arr[i].first;
	sort(arr.begin()+3, arr.end(),cmp);
	cout << sum << '\n';
	for (int i = 3; i < 8; i++) {
		cout << arr[i].second << ' ';
	}
	return 0;
}