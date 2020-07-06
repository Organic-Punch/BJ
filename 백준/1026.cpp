#include <cstdio>
#include <algorithm>
using namespace std;
#pragma warning (disable : 4996)
inline bool cmp(int a, int b) {
	if (a <= b)return false;
	else return true;
}

int main() {
	int N; scanf("%d", &N);
	int arr1[51], arr2[51];
	for (int i = 0; i < N; i++) scanf("%d", &arr1[i]);
	for (int i = 0; i < N; i++) scanf("%d", &arr2[i]);
	sort(arr1, arr1+N);
	sort(arr2, arr2+N,cmp);
	int sum = 0;
	for (int i = 0; i < N; i++) sum += arr1[i] * arr2[i];
	printf("%d", sum);
	return 0;
}