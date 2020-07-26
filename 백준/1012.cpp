#include <bits/stdc++.h>
#pragma warning (disable : 4996)
using namespace std;

#define pib pair<int, bool>
#define pii pair<int, int>

int T, N, M, K;
vector<vector<pib>>idx;
vector<pii>pos;

int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int DFS(int y, int x) {
	if (y < 0 || x < 0 || y >= N || x >= M) return 0;
	else if (idx[y][x].first == 0 || idx[y][x].second == true) return 0;
	else {
		idx[y][x].second = true;
		for (int i = 0; i < 4; i++) {
			DFS(y + dir[i][0], x + dir[i][1]);
		}
	}
	return 1;
}

int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &M, &N, &K);
		idx.clear(); pos.clear();
		idx.resize(N, vector<pair<int, bool>>(M, { 0,0 }));
		for (int i = 0; i < K; i++) {
			int x, y;
			scanf("%d %d", &y, &x);
			idx[x][y] = { 1, 0};
			pos.push_back({ x,y });
		}
		int result = 0;
		for (int i = 0; i < pos.size(); i++) {
			if (idx[pos[i].first][pos[i].second].first == 1 && !idx[pos[i].first][pos[i].second].second) {
				result += DFS(pos[i].first, pos[i].second);
			}
		}
		printf("%d\n", result);
	}
	return 0;
}