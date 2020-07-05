#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N;
	int Max = 0;
	for (int i = 0; i < N; i++) {
		int arr[7] = { 0, }; int x, y, z, a;
		cin >> x >> y >> z >> a;
		arr[x]++; arr[y]++; arr[z]++; arr[a]++;
		if (x != y && y != z && z != x) {
			Max = max(Max, (max(x, max(y, max(z,a))) * 100));
			continue;
		}
		for (int i = 1; i < 7; i++) {
			if (arr[i] == 4) Max = max(Max, (50000 + i * 5000));
			else if (arr[i] == 3) Max = max(Max, (10000 + i * 1000));
			else if (arr[i] == 2) Max = max(Max, (1000 + i * 100));
		}
	}
	cout << Max;
	return 0;
}