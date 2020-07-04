#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int main() {
	int N;
	cin >> N;
	lli result = 0;
	for (int i = 1; i <= N-1; i++) result += ((N+1) * (lli)i);
	cout << result;
	return 0;
}