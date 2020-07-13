#include <cstdio>
#define INF 987654321
int main() {
	int N; scanf("%d", &N);
	int result = INF;
	for (int i = 0; i * 5 <= N; i++) {
		int cnt = 0;
		cnt += i;
		if (((N - (i * 5)) % 3) == 0) cnt += ((N - (i * 5)) / 3);
		else continue;
		result = result > cnt ? cnt : result;
	}
	if (result == INF) printf("-1");
	else printf("%d", result);
	return 0;
}