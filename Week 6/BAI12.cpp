#include <bits/stdc++.h>
using namespace std;

int search(int k, int n){
    if (k >= 0 && k <= n && n >= 1 && n <= 20){
        return 1;
    }
    return 0;
}
int toHop(int k, int n){
    if (k == 0 || k == n){
        return 1;
    }
    return toHop(k-1, n-1) + toHop(k, n-1);
}
int main () {
    int n,k;
    cin >> n >> k;
    cout << toHop(k,n);
}   

