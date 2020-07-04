#include <bits/stdc++.h>

using namespace std;

int al[26];

int main() {
	string s;
	while (getline(cin,s)) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ' ' || s[i] != '\n') {
				al[s[i] - 'a']++;
			}
		}
		s.clear();
	}
	int Max = 0;
	for (int i = 1; i < 26; i++) {
		if (al[Max] < al[i]) Max = i;
	}
	for (int i = 0; i < 26; i++) {
		if (al[Max] == al[i])cout << (char)('a' + i);
	}
	return 0;
}