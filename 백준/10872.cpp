#include <cstdio>
int F(int N) {
	if (N <= 1) return 1;
	return N * F(N - 1);
}
int main() {
	int N; scanf("%d", &N);
	printf("%d", F(N));
	return 0;
}