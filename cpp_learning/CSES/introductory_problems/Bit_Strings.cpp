#include <iostream>
using namespace std;
const long long MOD = 1e9 + 7;
int main() {
    int n;
    long long ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ans = (ans * 2) % MOD;
    }
    cout << ans;
    return 0;
}