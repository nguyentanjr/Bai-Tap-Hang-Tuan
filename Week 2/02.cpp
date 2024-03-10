#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n;
    while(n > 0){
        for(int j = 0; j < m-n+1; j++)cout<<" ";
        for(int i = 1; i <= n; i++)cout << "*";
        cout << endl;
        n--;
    }
}