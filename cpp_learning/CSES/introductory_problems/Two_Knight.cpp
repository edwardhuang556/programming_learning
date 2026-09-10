#include<iostream>
using namespace std;

#define ll long long

void twoKnight(ll num) {
    ll tmp = num * num;
    ll total = tmp * (tmp - 1) / 2;

    ll hor = num - 2, ver = num - 1;

    ll attack = 4 * hor * ver;

    cout << total - attack << endl;
}

int main(){
    ll n;
    cin >> n;
    if (n == 1) {
        cout << "0" << endl;
    } else if (n == 2) {
        cout << "0" << endl << "6" <<endl;
    } else {
        cout << "0" << endl << "6" <<endl;
        for (ll i = 3; i <= n; i++)
            twoKnight(i);
    }
    return 0;
}