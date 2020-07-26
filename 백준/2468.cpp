#include <bits/stdc++.h>

using namespace std;

int idx[101][101];
bool vis[101][101];
int N, H, result = 1;
int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int DFS(int y, int x, int H) {
	if (y < 0 || y >= N || x < 0 || x >= N || idx[y][x] <= H || vis[y][x]) return 0;
	vis[y][x] = true;
	for (int i = 0; i < 4; i++)
		DFS(y + dir[i][0], x + dir[i][1], H);
	return 1;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			scanf("%d", &idx[i][j]);
			H = H < idx[i][j] ? idx[i][j] : H;
		}
	if (H == 1) { printf("%d", result); return 0; }
	for (int h = 1; h <= H; h++) {
		int temp = 0;
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (idx[i][j] > h && !vis[i][j]) temp += DFS(i, j, h);
			}
		}
		result = max(result, temp);
	}
	printf("%d", result);
	return 0;
}