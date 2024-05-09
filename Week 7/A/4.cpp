#include<bits/stdc++.h>
using namespace std;
//funtion sum a to b
int binary(int* a,int n,int x){
    int l = 0 , r = n - 1;
    int mid = (l + r)/2;
    while(l <= r){
        if(*(a + mid) == x)return mid;
        else if(*(a + mid) < x)l = mid + 1;
        else r = mid - 1;
    }
}
int main(){
    int n;
    cin >> n;
    int* a = new int(n);
    for(int i = 0 ; i < n; i++)cin >> a[i];
    int x;
    cin >> x;
    cout << binary(a,n,x);
}