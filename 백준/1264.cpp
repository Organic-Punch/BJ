#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	while (getline(cin,s)) {
		if (s == "#")break;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}