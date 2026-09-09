#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    long long max_count = 1, current_count = 1;
    for(long long i=1; i<str.length(); i++){
        if(str[i] == str[i-1]){
            current_count++;
        } else {
            current_count = 1;
        }
       max_count = max(max_count, current_count);
    }
    cout << max_count << endl;
    return 0;
}