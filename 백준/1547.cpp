#include <bits/stdc++.h>

using namespace std;
int idx[4] = {0,1,0,0};

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		swap(idx[a], idx[b]);
	}
	for (int i = 1; i < 4; i++) if (idx[i] == 1) cout << i;
	return 0;
}