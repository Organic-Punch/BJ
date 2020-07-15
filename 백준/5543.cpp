#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		int a, b, c;
		if (i == 0) {
			scanf("%d %d %d", &a, &b, &c);
			sum += min(a, min(b, c));
		}
		else {
			scanf("%d %d", &a, &b);
			sum += min(a, b);
		}
	}
	printf("%d", sum - 50);
	return 0;
}