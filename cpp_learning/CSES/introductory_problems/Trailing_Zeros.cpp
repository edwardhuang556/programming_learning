#include <iostream>
using namespace std;

struct Cnt
{
    long long ten_cnt = 0;
    long long five_cnt = 0;
    long long two_cnt = 0;
};

int main()
{
    long long n, total_ten_cnt = 0, total_five_cnt = 0, total_two_cnt = 0;
    cin >> n;
    Cnt *table = new Cnt[n + 1];
    for (int i = 2; i <= n; i++)
    {
        long long tmp = i;
        if (tmp % 10 == 0)
        {
            tmp /= 10;
            table[i] = table[tmp];
            table[i].ten_cnt++;
        }
        else if (tmp % 5 == 0)
        {
            tmp /= 5;
            table[i] = table[tmp];
            table[i].five_cnt++;
        }
        else if (tmp % 2 == 0)
        {
            tmp /= 2;
            table[i] = table[tmp];
            table[i].two_cnt++;
        }
        total_ten_cnt += table[i].ten_cnt;
        total_five_cnt += table[i].five_cnt;
        total_two_cnt += table[i].two_cnt;
    }
    cout << total_ten_cnt + min(total_five_cnt, total_two_cnt) << endl;
    delete[] table;
    table = nullptr;
    return 0;
}