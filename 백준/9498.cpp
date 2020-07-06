#include <cstdio>

int main() {
	int N; scanf("%d", &N);
	printf("%c",(N > 89 ? 'A' : N > 79 ? 'B' : N > 69 ? 'C' : N > 59 ? 'D' : 'F'));
	return 0;
}