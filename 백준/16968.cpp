/* ������ȣ��1
�ð� ���� 1�� �޸� ���� 512MB
���� 0 ~ 9
���� a ~ z
���� = 4

���� ���ڳ� ���� ���ڰ� �����ؼ� ����� �Ұ��ϴ�.

dd : 00 11 22 33 44 55 66 77 88 99
ddd : 000 001 

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s; cin >> s;
	int cnt = (s[0] == 'd' ? 10 : 26);
	if (s.size() != 1) {
		for (int i = 1; i < s.size(); i++) 
			if (s[i] != s[i - 1]) cnt *= (s[i] == 'd' ? 10 : 26);
			else cnt *= (s[i] == 'd' ? 9 : 25);
	}
	cout << cnt;
	return 0;
}