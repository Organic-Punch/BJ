#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, ret = 0;;
    cin >> N;
    for (int i = 1; i < N; i *= 10) ret += (N - i + 1);
    cout << ret;
    return 0;
}