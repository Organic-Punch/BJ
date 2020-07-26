#include <iostream>
#include <vector>

using namespace std;
int N, M;
vector<int>idx[1001];
vector<bool>visited;

void DFS(int idx) {
	visited[idx] = true;
	for (int i = 0; i < idx[idx].size(); i++) {
		if (!visited[idx[idx][i]]) {
			DFS(idx[idx][i]);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	visited.resize(N + 1);
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		idx[b].push_back(a);
		idx[a].push_back(b);
	}
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			DFS(i);
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}