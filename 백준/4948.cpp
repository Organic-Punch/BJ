#include <bits/stdc++.h>

using namespace std;
bool prime[247001];
vector<int>num;
void E() {
	prime[0] = prime[1] = 1;
	for (int i = 2; i * i < 247001; i++) {
		if (!prime[i]) {
			for (int j = i+i; j < 247001; j+=i) {
				if (!prime[j]) prime[j] = true;
			}
		}
	}
	for (int i = 2; i < 247001; i++) if (!prime[i])num.push_back(i);
}

int main() {
	E();
	int N;
	while (scanf("%d", &N)) {
		if (N == 0) break;
		int cnt = 0;
		for (int i = 0; num[i] < 2*N+1; i++) 
			if (num[i] > N) cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}