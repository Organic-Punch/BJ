#include <bits/stdc++.h>
using namespace std;
void print(int hour, int Min) {
	if (Min >= 45) printf("%d %d", hour, Min - 45);
	else {
		if (hour != 0) printf("%d %d", hour-1, (60 + (Min - 45)));
		else printf("%d %d", 23, (60 + (Min - 45)));
	}
}
int main() {
	int hour, Min; scanf("%d %d", &hour, &Min);
	print(hour, Min);
	return 0;
}