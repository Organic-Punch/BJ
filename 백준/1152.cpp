#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	if (s == " ") { cout << 0; return 0; }
	int sp = 0, ep = s.size() - 1;
	if (s[sp] == ' ') sp++;
	if (s[ep] != ' ') ep++;
	int cnt = 1;
	for (int i = sp; i < ep; i++) {
		if (s[i] == ' ')cnt++;
	}
	cout << cnt;
	return 0;
}