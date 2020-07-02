#include <bits/stdc++.h>
#pragma warning (disable : 4996)
using namespace std;

int N, number = 1;
int arr[25][25];
bool vis[25][25];
int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };
vector<int>result;

int DFS(int y, int x) {
	int temp = 1;
	if (arr[y][x] == 0 || vis[y][x] == true || y < 0 || x < 0 || y >= N || x >= N) return 0;
	else {
		arr[y][x] = number;
		vis[y][x] = true;
		for (int i = 0; i < 4; i++) {
			temp += DFS(y + dir[i][0], x + dir[i][1]);
		}
	}
	return temp;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1 && vis[i][j] == false) {
				result.push_back(DFS(i, j));
			}
		}
	}
	sort(result.begin(), result.end());
	printf("%d\n", result.size());
	for (int i = 0; i < result.size(); i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}