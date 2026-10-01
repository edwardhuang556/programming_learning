#include <iostream>
using namespace std;

void grayCode(int len, string str, int order) // order = 0 ,start from 0
{
    if (len == 0)
    {
        cout << str << endl;
        return;
    }

    if (order == 0)
    {
        grayCode(len - 1, str + "0", 0);
        grayCode(len - 1, str + "1", 1);
    }
    else
    {
        grayCode(len - 1, str + "1", 0);
        grayCode(len - 1, str + "0", 1);
    }
}

int main()
{
    int n;
    cin >> n;

    grayCode(n, "", 0);

    return 0;
}