#include <bits/stdc++.h>

using namespace std;
int N;

vector<int>idx;
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
			temp[M] = idx[i];
			dfs(i + 1, M + 1);
		}
	}
}

int main() {
	while (1) {
		cin >> N;
		if (N == 0) return 0;
		idx.clear(); temp.clear();
		idx.resize(N, 0); temp.resize(N, 0);
		for (int i = 0; i < N; i++) {
			cin >> idx[i];
		}
		dfs();
		cout << '\n';
	}
	return 0;
}