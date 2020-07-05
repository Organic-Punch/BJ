#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N;
	int k = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < k; j++) cout << '*';
		cout << '\n';
		k++;
	}
	return 0;
}