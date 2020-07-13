#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	string s = to_string((a * b * c));
	int arr[10] = { 0, };
	for (int i = 0; i < s.size(); i++) arr[s[i] - 48]++;
	for (int i = 0; i < 10; i++) printf("%d\n", arr[i]);
	return 0;
}