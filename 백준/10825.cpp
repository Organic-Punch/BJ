#include <bits/stdc++.h>

using namespace std;

#define tsiii tuple<string,int,int,int>

bool cmp(tsiii a, tsiii b) {
	if (get<1>(a) > get<1>(b)) return true;
	else if (get<1>(a) == get<1>(b) && get<2>(a) < get<2>(b)) return true;
	else if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) > get<3>(b)) return true;
	else if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) == get<3>(b)) return get<0>(a) < get<0>(b);
	else return false;
}

int main() {
	int N; cin >> N;
	vector<tsiii>arr(N);
	for (int i = 0; i < N; i++) {
		string temp1; int a, b, c;
		cin >> temp1 >> a >> b >> c;
		arr[i] = make_tuple(temp1, a, b, c);
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << get<0>(arr[i]) << '\n';
	}
	return 0;
}