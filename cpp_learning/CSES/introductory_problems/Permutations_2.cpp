#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1;
    }
    else if(n==2 || n==3){
        cout << "NO SOLUTION";
    }else if(n==4){
        cout << "3 1 4 2";

    }else{
        if(n%2!=0){
            for(int i=n-((n-3)/2); i<=n;i++){
                cout << i << " " << (n+1)-i << " ";
            }
            cout << (n+1)/2;
        }else{
            n--;
            for(int i=n-((n-3)/2); i<=n;i++){
                cout << i << " " << (n+1)-i << " ";
            }
            cout << (n+1)/2 << " " << n+1;
        }
    }
}