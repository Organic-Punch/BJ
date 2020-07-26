#include <bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
int idx[101][101], dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
bool vis[101][101];
int main() {
	int N, M; scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) scanf("%1d", &idx[i][j]);
	queue<pii>q; q.push({ 0, 0 });
	while (!q.empty() && idx[N-1][M-1] == 1) {
		int y = q.front().first, x = q.front().second;
		q.pop();
		if (vis[y][x] == true) continue;
		vis[y][x] = true;
		for (int i = 0; i < 4; i++) {
			int ny = y + dir[i][0], nx = x + dir[i][1];
			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (vis[ny][nx] || idx[ny][nx] == 0) continue;
			q.push({ ny,nx });
			idx[ny][nx] = idx[y][x] + 1;
		}
	}
	printf("%d",idx[N - 1][M - 1]);
	return 0;
}