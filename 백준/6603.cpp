#include <bits/stdc++.h>

using namespace std;
int N;

vector<int>arr;
vector<int>temp;

void dfs(int idx = 0, int M = 0) {
	if (M == 6) {
		for (int i = 0; i < 6; i++) {
			cout << temp[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = idx; i < N; i++) {
			temp[M] = arr[i];
			dfs(i + 1, M + 1);
		}
	}
}

int main() {
	while (1) {
		cin >> N;
		if (N == 0) return 0;
		arr.clear(); temp.clear();
		arr.resize(N, 0); temp.resize(N, 0);
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		dfs();
		cout << '\n';
	}
	return 0;
}