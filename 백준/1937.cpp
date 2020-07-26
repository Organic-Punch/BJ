#include <bits/stdc++.h>

using namespace std;

int N, dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
vector<vector<int>>idx;
vector<vector<bool>>vis;
int DFS(int y, int x) {
	int result = 1;
	int temp = 1;
	vis[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dir[i][0], nx = x + dir[i][1];
		if (ny < 0 || nx < 0 || ny >= N || nx >= N || vis[ny][nx] == true) continue;
		if (idx[y][x] < idx[ny][nx]) {
			temp += DFS(ny, nx);
			result = max(temp, result);
		}
	}
	return result;
}

int main() {
	cin >> N;
	idx.resize(N, vector<int>(N,0));
	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> idx[i][j];
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			vis.clear();
			vis.resize(N, vector<bool>(N, 0));
			cnt = max(cnt,DFS(i,j));
		}
	}
	cout << cnt;
	return 0;
}