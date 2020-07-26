#include <bits/stdc++.h>

using namespace std;

int N, M, K;
vector<vector<int>>idx;
bool visited[101][101];
enum { UP = -1, DOWN = 1, LEFT = -1, RIGHT = 1 };
int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int DFS(int x, int y) {
	if (x < 0 || y < 0 || x >= N || y >= M || visited[x][y] || idx[x][y])return 0;
	visited[x][y] = true;
	int temp = 1;
	for (int i = 0; i < 4; i++) temp += DFS(x + dir[i][0], y + dir[i][0]);
	/*temp += DFS(x + UP, y);
	temp += DFS(x + DOWN, y);
	temp += DFS(x, y + LEFT);
	temp += DFS(x, y + RIGHT);*/
	return temp;
}
int main() {
	cin >> N >> M >> K;
	idx.resize(N, vector<int>(M, 0));
	for (int i = 0; i < K; i++) {
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;
		for (int i = ly; i < ry; i++) {
			for (int j = lx; j < rx; j++) {
				idx[i][j] = 1;
			}
		}
	}
	vector<int>cnt;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (idx[i][j] == 0 || !visited[i][j]) {
				int result = DFS(i, j);
				if (result != 0)
					cnt.push_back(result);
			}
		}
	}
	sort(cnt.begin(), cnt.end());
	cout << cnt.size() << '\n';
	for (int i = 0; i < cnt.size(); i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}