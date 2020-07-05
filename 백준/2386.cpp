/*
g Programming Contest
n New Zealand
x This is quite a simple problem.
#
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		if (s[0] == '#') break;
		int cnt = 0;
		for (int i = 2; i < s.size(); i++) 
			if (s[0] == s[i] || (s[0] - 32) == s[i]) cnt++;
		cout << s[0] << ' ' << cnt << '\n';
		s.clear();
	}
	return 0;
}