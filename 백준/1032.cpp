#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; scanf("%d", &N);
	string s;
	cin >> s;
	for (int i = 1; i < N; i++) {
		string temp;
		cin >> temp;
		for (int i = 0; i < s.size(); i++) if (s[i] != temp[i])s[i] = '?';
	}
	cout << s;
	return 0;
}