#include <cstdio>
#pragma warning (disable : 4996)
int main() {
	int MN = 64;
	int n; scanf("%d", &n);
	int cnt = 0, sum = 0;
	while (MN > 0) {
		if (MN <= n && sum + MN <= n) {
			sum += MN;
			cnt++;
		}
		MN /= 2;
	}
	printf("%d", cnt);
	return 0;
}