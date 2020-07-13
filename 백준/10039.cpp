#include<bits/stdc++.h>

using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int temp; scanf("%d", &temp);
		sum += temp >= 40 ? temp : 40;
	}
	printf("%d", sum / 5);
	return 0;
}