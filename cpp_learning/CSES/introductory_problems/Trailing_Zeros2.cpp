#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long ans = 0;
    while (n >= 5)
    {
        ans += n / 5;
        n /= 5;
    }

    cout << ans << "\n";
    return 0;
}