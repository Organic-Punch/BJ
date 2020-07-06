#include <cstdio>
#pragma warning (disable : 4996)
int main() {
	int N; scanf("%d", &N);
	int arr[10001] = { 0, };
	for (int i = 0; i < N; i++) {
		int temp; scanf("%d", &temp);
		arr[temp]++;
	}
	for (int i = 0; i < 10001; i++) if (arr[i] != 0) for (int j = 0; j < arr[i]; j++) printf("%d\n", i);
	return 0;
}