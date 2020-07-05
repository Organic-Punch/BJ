#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N;
	int Max = 0;
	for (int i = 0; i < N; i++) {
		int arr[7] = { 0, }; int x, y, z, a;
		cin >> x >> y >> z >> a;
		arr[x]++; arr[y]++; arr[z]++; arr[a]++;
		if (x != y && x != z && x != a) {
			if (y != z && y != a) {
				if (z != a) {
					Max = max(Max, (max(x, max(y, max(z, a))) * 100));
					continue;
				}
			}
		}
		int temp = 0;
		for (int i = 1; i < 7; i++) {
			if (arr[i] == 4) { max(Max, (50000 + i * 5000)); break; }
			else if (arr[i] == 3) temp += (10000 + i * 1000);
			else if (arr[i] == 2) temp += (1000 + i * 100);
		}
		Max = max(Max, temp);
	}
	cout << Max;
	return 0;
}