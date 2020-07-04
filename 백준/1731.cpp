#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N;
	vector<int>arr;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		arr.push_back(a);
	}
	bool check[2] = { 1,1 };
	int diffca = arr[1] - arr[0];
	for (int i = 1; i < arr.size()-1; i++) {
		if (diffca != (arr[i + 1] - arr[i])) check[0] = false;
	}
	int diffbe = arr[1] / arr[0];
	for (int i = 1; i < arr.size()-1; i++) {
		if (diffbe != (arr[i + 1] / arr[i])) check[1] = false;
	}
	if (check[0]) cout << (arr[arr.size() - 1] + diffca);
	else if (check[1]) cout << (arr[arr.size() - 1] * diffbe);
	return 0;
}