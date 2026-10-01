#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 10^6 的字串長度，必須關閉同步加速 I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s))
        return 0;

    int n = s.size();
    vector<int> cnt(26, 0);
    for (char c : s)
    {
        cnt[c - 'A']++;
    }

    int odd_idx = -1;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 != 0)
        {
            if (odd_idx != -1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
            odd_idx = i;
        }
    }

    // 建立結果字串，長度為 n
    string ans(n, ' ');
    int left = 0;
    int right = n - 1;

    // 先填所有偶數成對的字元（奇數字元先填成對的部分）
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] >= 2)
        {
            ans[left++] = 'A' + i;
            ans[right--] = 'A' + i;
            cnt[i] -= 2;
        }
    }

    // 若有奇數字元，此時必定剛好剩 1 個，直接放在正中間 (left == right)
    if (odd_idx != -1)
    {
        ans[left] = 'A' + odd_idx;
    }

    cout << ans << "\n";

    return 0;
}