#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

int main()
{
    string str;
    cin >> str;

    for (char c : str)
        mp[c]++;

    int odd_index = -1;
    for (const auto &[alphabet, num] : mp)
    { // check no more than one odd
        if (num % 2 != 0)
        {
            if (odd_index == -1)
            {
                odd_index = alphabet;
            }
            else
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    char c = odd_index;
    string ans_str;
    if (odd_index != -1)
    {
        for (int i = 1; i <= mp[odd_index]; i++)
            ans_str += c;
    }

    for (const auto &[alphabet, num] : mp)
    {
        if (alphabet == odd_index)
            continue;

        for (int i = 1; i <= (num / 2); i++)
        {
            ans_str = alphabet + ans_str + alphabet;
        }
    }

    cout << ans_str;

    return 0;
}