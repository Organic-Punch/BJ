#include <bits/stdc++.h>
#pragma warning (disable : 4996)
//dfsbfs
using namespace std;

int idx[1001][1001];
bool visited[1001];
int N, M, F, a, b;

queue<int>q;

void DFS(int y = F) {
	visited[y] = true;
	for (int i = 1; i <= N; i++) {
		if (idx[y][i] == 1 && visited[i] == false) {
			printf("%d ", i);
			DFS(i);
		}
	}
}

void BFS(int idx = F) {
	q.push(idx);
	visited[idx] = 1;
	while (!q.empty()) {
		printf("%d ", q.front());
		idx = q.front();
		q.pop();
		for (int i = 0; i < N + 1; i++) {
			if (idx[idx][i] && !visited[i]) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main() {
	scanf("%d %d %d", &N, &M, &F);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		idx[a][b] = idx[b][a] = 1;
	}
	printf("%d ", F);
	DFS();
	printf("\n");
	memset(visited, 0, sizeof(visited));
	BFS();
	return 0;
}