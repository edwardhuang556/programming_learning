#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = n*(n+1)/2;
    long long tmp;
    for(int i=0; i<n-1; i++){
        cin >> tmp;
        sum -= tmp;
    }
    cout << sum << endl;
}