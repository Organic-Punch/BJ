#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
	if (a.size() < b.size()) return true;
	else if (a.size() == b.size() && a < b) return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N; cin >> N;
	vector<string>arr;
	for (int i = 0; i < N; i++) {
		string temp; cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end(), cmp);
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	for (int i = 0; i < arr.size(); i++) cout << arr[i] << '\n';
	return 0;
}