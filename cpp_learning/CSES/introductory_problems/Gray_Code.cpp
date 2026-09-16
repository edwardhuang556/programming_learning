#include <iostream>
using namespace std;

void grayCode(int len, string str, int order) // order = 0 ,start from 0
{
    if (len == 1)
    {
        if (order == 0)
        {
            cout << str + "0" << endl;
        }
        else
        {
            cout << str + "1" << endl;
        }
    }
    else
    {
        if (order == 0)
        {
            grayCode(len - 1, str + "0", 0);
            grayCode(len - 1, str + "0", 1);
        }
        else
        {
            grayCode(len - 1, str + "1", 1);
            grayCode(len - 1, str + "1", 0);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    grayCode(n, "", 0);
    grayCode(n, "", 1);

    return 0;
}