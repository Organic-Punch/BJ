#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, Max = 0, x, y, z; cin >> N;
	for (int i = 0; i < N; i++) {
		int arr[7] = {0,};
		cin >> x >> y >> z;
		arr[x]++; arr[y]++; arr[z]++;
		if (x!=y&&y!=z&&z!=x) {
			Max = max(Max, (max(x, max(y, z)) * 100));
			continue;
		}
		for (int i = 1; i < 7; i++) {
			if (arr[i] == 3) Max = max(Max, (10000 + i * 1000));
			else if (arr[i] == 2) Max = max(Max, (1000 + i * 100));
		}
	}
	cout << Max;
	return 0;
}