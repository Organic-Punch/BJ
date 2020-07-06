#include <cstdio>

int main() {
	int N, K; scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		int temp; scanf("%d", &temp);
		if (temp < K) printf("%d ", temp);
	}
	return 0;
}