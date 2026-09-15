#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
        {
            int tmp = a;
            a = b;
            b = tmp;
        } // make sure a >= b

        int sum = a + b;
        if (sum % 3 != 0 || a > b * 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}