#include <bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
int arr[1001][1001], dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
bool vis[1001][1001];
queue<pii>q;
int main() {
	int N, M; scanf("%d %d", &M, &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1) q.push({ i,j });
		}
	}
	while (!q.empty()) {
		int y = q.front().first, x = q.front().second;
		q.pop();
		if (y < 0 || x < 0 || y >= N || x >= M) continue;
		if (vis[y][x] == true) continue;
		vis[y][x] = true;
		for (int i = 0; i < 4; i++) {
			int ny = y + dir[i][0], nx = x + dir[i][1];
			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (vis[ny][nx] == true || arr[ny][nx] != 0) continue;
			arr[ny][nx] = arr[y][x] + 1;
			q.push({ ny,nx });
		}
	}
	int Max = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 0) { printf("%d", -1); return 0; }
			Max = max(Max, arr[i][j]);
		}
	}
	printf("%d", Max - 1);
	return 0;
}