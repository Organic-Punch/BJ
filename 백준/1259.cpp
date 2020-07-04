#include <bits/stdc++.h>

using namespace std;

int main() {
	string n;
	while (cin >> n) {
		if (n == "0") break;
		bool c = false;
		for (int i = 0; i < n.size() / 2; i++) {
			if (!c && n[i] != n[n.size() - 1 - i]) { cout << "no\n"; c = true; }
		}
		if (!c) cout << "yes\n";
	}
	return 0;
}