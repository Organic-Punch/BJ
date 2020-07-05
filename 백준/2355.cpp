#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int main() {
	lli a, b; cin >> a >> b;
	if (a > b) { swap(a, b); }
	cout << (a + b) * (b - a + 1) / 2 << "\n";
	return 0;
}