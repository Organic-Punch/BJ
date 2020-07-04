#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; cin >> N;
	int timer = 0, sum = 0;
	int num = 1;
	while (sum != N) {
		if (sum + num <= N) {
			sum += num;
			num++;
		}
		else {
			num = 1;
			sum += num;
			num++;
		}
		timer++;
	}
	cout << timer;
	return 0;
}