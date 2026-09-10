#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long tmp_max, input, ans = 0;
    cin >> tmp_max;
    for(long long i=1; i<n; i++){
        cin >> input;
        if(input < tmp_max){
            ans += (tmp_max - input);
        }else{
            tmp_max = input;
        }
    }
    cout << ans << endl;
    return 0;
}