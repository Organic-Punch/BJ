#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
int num;
int main() {
	int T; scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		char a[6];
		scanf("%s", a);
		if (a == "push") {
			scanf("%d", &num); Q.push(num);
		}
		else if (a == "pop") {
			if (Q.empty()) printf("-1\n");
			else {
				printf("%d\n", Q.front());
				Q.pop();
			}
		}
		else if (a == "size") printf("%d\n", Q.size());
		else if (a == "empty") {
			if (Q.empty()) printf("1\n");
			else printf("0\n");
		}
		else if (a == "front") {
			if (!Q.empty()) printf("%d\n", Q.front());
			else printf("-1\n");
		}
		else if (a == "back") {
			if (!Q.empty()) printf("%d\n", Q.back());
			else printf("-1\n");
		}
	}
	return 0;
}