#include <bits/stdc++.h>

using namespace std;
string S, F;

int main() {
	getline(cin, S);
	getline(cin, F);
	stack<char>ST;
	stack<char>temp;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] != F[F.size() - 1]) ST.push(S[i]);
		else {
			ST.push(S[i]);
			bool check = true;
			for (int j = F.size() - 1; j >= 0; j--) {
				if (!ST.empty() && F[j] == ST.top()) {
					temp.push(ST.top());
					ST.pop();
				}
				else check = false;
			}
			if (!check) {
				while (!temp.empty()) {
					ST.push(temp.top());
					temp.pop();
				}
			}
			while (!temp.empty()) temp.pop();
		}
	}
	if (ST.size() == 0) cout << "FRULA";
	else {
		deque<char>dq;
		while (!ST.empty()) {
			dq.push_front(ST.top());
			ST.pop();
		}
		for (int i = 0; i < dq.size(); i++) {
			cout << dq[i];
		}
	}
	return 0;
}