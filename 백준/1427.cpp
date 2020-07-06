#include <bits/stdc++.h>

using namespace std;

bool cmp(char a, char b) {
	if (a < b) return false;
	else return true;
}

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end(), cmp);
	cout << s;
	return 0;
}