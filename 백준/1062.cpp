#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;



int N, K, result;
string word[MAX];
bool visited[26];

void howMany(int alpha, int cnt) {
    if (cnt == K) {
        int temp = 0;
        for (int i = 0; i < N; i++) {
            bool flag = true;
            for (int j = 0; j < word[i].length(); j++)
                if (!visited[word[i][j] - 'a']) {
                    flag = false;
                    break;
                }
            if (flag) temp++;
        }
        result = max(result, temp);
        return;
    }
    for (int c = alpha; c < 26; c++) {
        if (!visited[c]) {
            visited[c] = true;
            howMany(c, cnt + 1);
            visited[c] = false;
        }
    }
}

int run() {
    K -= 5;
    for (int i = 0; i < N; i++) {
        cin >> word[i];
        word[i] = word[i].substr(4, word[i].length());
        for (int j = 0; j < 4; j++) word[i].pop_back();
    }
    visited['a' - 'a'] = true;
    visited['c' - 'a'] = true;
    visited['i' - 'a'] = true;
    visited['n' - 'a'] = true;
    visited['t' - 'a'] = true;
    howMany(0, 0);
    return result;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> N >> K;
	printf("%d", K < 5 ? 0 : K == 26 ? N : run());
	return 0;
}