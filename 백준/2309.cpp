#include <bits/stdc++.h>

using namespace std;

vector<int>idx;
vector<int>result;

void BackT(int idx = 0, int sum = 0, int cnt = 0, string idxnum = "") {
	if (idx > 9 || sum > 100) return;
	if (sum == 100 && cnt == 7) {
		for (int i = 0; i < idxnum.size(); i++) cout << idx[(int)(idxnum[i] - 48)] << '\n';
		exit(0);
	}
	else {
		for (int i = idx; i < 9; i++) {
			BackT(i + 1, sum + idx[i], cnt + 1, idxnum + to_string(i));
		}
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		int a; cin >> a;
		idx.push_back(a);
	}
	sort(idx.begin(), idx.end());
	BackT();
	return 0;
}