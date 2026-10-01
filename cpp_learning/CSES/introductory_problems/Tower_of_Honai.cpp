#include <iostream>
using namespace std;

void solveHonai(int n, int from, int to, int mid)
{
    if (n == 1)
    {
        cout << from << " " << to << endl;
        return;
    }
    solveHonai(n - 1, from, mid, to);
    cout << from << " " << to << endl;
    solveHonai(n - 1, mid, to, from);
    return;
}

int main()
{
    int n;
    cin >> n;
    int tmp = 1 << n;
    cout << tmp - 1 << endl;
    solveHonai(n, 1, 3, 2);
}