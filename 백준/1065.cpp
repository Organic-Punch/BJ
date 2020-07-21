#include<cstdio>

#define H 100

using namespace std;

int BF(int n) {
    int i, cnt = 0, temp;
    if (n < H) return n;
    for (i = H; i <= n; i++) if (((i / H) - ((i % H) / 10)) == (((i % H) / 10) - ((i % H) % 10))) cnt++;
    return (99 + cnt);
}

int main() {
    int input;
    scanf("%d", &input);
    printf("%d", BF(input));
    return 0;
}

