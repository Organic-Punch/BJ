#include <bits/stdc++.h>

using namespace std;

int num(char temp) {
	switch (temp) {
	case '-': return 0;
	case '\\': return 1;
	case '(': return 2;
	case '@': return 3;
	case '?': return 4;
	case '>': return 5;
	case '&': return 6;
	case '%': return 7;
	case '/': return -1;
	}
}

int main() {
	string s;
	while (cin >> s) {
		if (s == "#") break;
		int sum = 0;
		for (int i = 0; i < s.size(); i++) {
			int temp = 1;
			for (int j = 0; j < (s.size()-1-i); j++) 
				temp *= 8;
			if ((s.size() - 1 - i) < 0) temp = 1;
			sum += (num(s[i]) * temp);
		}
		cout << sum << '\n';
	}
	return 0;
}