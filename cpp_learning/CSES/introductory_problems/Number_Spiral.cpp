#include<iostream>
using namespace std;
int main(){
    long long x, y;
    int n;
    cin >> n;
    while(n--){
        cin >> y >> x;
        long long layer_num = max(x, y);
        long long layer_start = (layer_num - 1) * (layer_num - 1) + 1;
        long long layer_end = layer_num * layer_num;
        if(layer_num % 2 == 0){
            if(x >= y){
                cout << layer_start + (y - 1);
            }else{
                cout << layer_end - x + 1;
            }
        }else{
            if(y >= x){
                cout << layer_start + (x - 1);
            }else{
                cout << layer_end - y + 1;
            }
        }
        cout << "\n";

    }
}