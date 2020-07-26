#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, result = 0; scanf("%d", &N);
	for (int i = N; i >= 0; i--) {
		string temp = to_string(i);
		int sum = i;
		for (int i = 0; i < temp.size(); i++) sum += (temp[i]-'0');
		if (N == sum) result = i;
	}
	printf("%d", result);
	return 0;
}