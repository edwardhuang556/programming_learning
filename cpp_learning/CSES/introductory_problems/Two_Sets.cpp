#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if (n % 4 == 0) {
        cout << "YES" << endl;
        
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 4; i++) {
            cout << i << " " << n - i + 1 << " "; 
        }
        cout << endl;

        cout << n / 2 << endl;
        for (int i = (n / 4) + 1; i <= n / 2; i++) {
            cout << i << " " << n - i + 1 << " "; 
        }
    } else if (n % 4 == 3) {
        cout << "YES" << endl;
        cout << (n / 2) + 1 << endl;
        for (int i = 1; i <= (n + 1) / 4; i++) {
            cout << i << " " << n - i<< " "; 
        }
        cout << endl;

        cout << n / 2 << endl;
        for (int i = ((n + 1) / 4) + 1; i <= n / 2; i++) {
            cout << i << " " << n - i << " "; 
        }
        cout << n;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}