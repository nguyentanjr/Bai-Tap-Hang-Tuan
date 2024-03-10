#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << j << " ";
        }
        if(i != 1){
            for(int k = 1; k <= i - 1; k++)cout << k <<" " ;
        }
        cout << endl;
    }
}