#include <bits/stdc++.h>

using namespace std;
int arr[4] = {0,1,0,0};

int main() {
	int n; cin >> n;
	if (n <= 0) { cout << -1; return 0; }
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a == b) continue;
		swap(arr[a], arr[b]);
	}
	for (int i = 1; i < 4; i++) if (arr[i] == 1) cout << i;
	return 0;
}