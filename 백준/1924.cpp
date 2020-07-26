#include <bits/stdc++.h>
using namespace std;
int idx[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

string weekday(int sum) {
	switch (sum) {
	case 0: return "SUN";
	case 1: return "MON";
	case 2: return "TUE";
	case 3: return "WED";
	case 4: return "THU";
	case 5: return "FRI";
	case 6: return "SAT";
	}
}

int main() {
	int Month, day; scanf("%d %d", &Month, &day);
	int sum = 0;
	for (int i = 1; i < Month; i++) sum += idx[i];
	sum += day;
	cout << weekday((sum % 7)) << '\n';
	return 0;
}