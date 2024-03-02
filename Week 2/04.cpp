#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0 ; j <= i; j++)cout <<" ";
        for(int k = 1; k <= 2*(n - i + 1)-1; k++)cout<<"*";
        cout << endl;
    }
}