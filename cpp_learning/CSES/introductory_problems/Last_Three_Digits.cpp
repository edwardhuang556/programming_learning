#include <iostream>
using namespace std;
const long long MOD = 1000;
int myPow(int base, int exp) {
    int ans = 1;
    base = base % MOD;
    while (exp > 0) {
        if (exp & 1) {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return ans;
}
int main() {
    int a, b;
    cin >> a >> b;
    printf("%03d", myPow(a, b)); 
    return 0;
}