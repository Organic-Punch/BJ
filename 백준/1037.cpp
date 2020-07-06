#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N; int Min = 987654321, Max = 0;
	for (int i = 0; i < N; i++) {
		int temp; cin >> temp;
		Min = min(Min, temp);
		Max = max(Max, temp);
	}
	cout << Max * Min;
	return 0;
}