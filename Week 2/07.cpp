#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    while(cin >> n){
        if(m == n){
            continue;
        }
        if(n == -1){
            cout << -1;return 0;
        }
        cout << n << " " ;
        m = n;
    }
}