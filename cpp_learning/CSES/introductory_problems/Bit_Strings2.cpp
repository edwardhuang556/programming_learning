#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        // 如果當前最低 bit 是 1，就乘進答案
        if (exp & 1) {
            res = (res * base) % MOD;
        }
        // 底數自乘翻倍 (a -> a^2 -> a^4 -> a^8 ...)
        base = (base * base) % MOD;
        // 指數右移一位
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    if (cin >> n) {
        cout << power(2, n) << "\n";
    }
    return 0;
}