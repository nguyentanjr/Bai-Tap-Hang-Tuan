#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n;
    for(int i = 0; i < n; i++){
        for(int k = 1; k <= n - i - 1; k++)cout<<" ";
        for(int j = 1; j <= i*2+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}