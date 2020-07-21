#include<bits/stdc++.h>

using namespace std;

int arr[9];
vector<int>idx;
int result = 0,N;

int ret() {
	int sum = 0;
	for (int i = 1; i < N; i++) sum += abs(arr[idx[i - 1]] - arr[idx[i]]);
	return sum;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		idx.push_back(i);
	}
	do {
		result = max(result, ret());
	} while (next_permutation(idx.begin(),idx.end()));
	printf("%d", result);
	return 0;
}