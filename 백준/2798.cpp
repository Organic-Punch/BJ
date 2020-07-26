#include <bits/stdc++.h>

using namespace std;

#define LIMIT 3
int N, M, result = 0;
vector<int>idx;
vector<bool>vis;

void BackT(int idx = 0, int sum = 0, int cnt = 0) {
	if (idx >= N || sum > M || cnt > LIMIT) return;
	if (cnt == LIMIT && sum <= M) {
		result = max(result, sum);
		if (result == M) { cout << result; exit(0); }
		return;
	}
	else {
		for (int i = 0; i < N; i++) {
			if (!vis[i]) {
				vis[i] = true;
				BackT(i, sum + idx[i], cnt + 1);
				vis[i] = false;
			}
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	scanf("%d %d", &N, &M);
	idx.resize(N, 0); vis.resize(N, 0);
	for (int i = 0; i < N; i++) scanf("%d", &idx[i]);
	BackT();
	cout << result;
	return 0;
}