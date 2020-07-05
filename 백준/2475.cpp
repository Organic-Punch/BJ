#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int main() {
	lli sum = 0, temp;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		sum += temp * temp;
	}
	sum %= 10;
	cout << sum;
	return 0;
}