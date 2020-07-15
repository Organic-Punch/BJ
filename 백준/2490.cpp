#include <bits/stdc++.h>

using namespace std;

char A(int a) {
	switch (a) {
	case 0: return 'D';
	case 1: return 'C';
	case 2: return 'B';
	case 3: return 'A';
	case 4: return 'E';
	}
}

int main() {
	for (int i = 0; i < 3; i++) {
		int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%c\n", A(a + b + c + d));
	}
	return 0;
}