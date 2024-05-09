#include<bits/stdc++.h>
using namespace std;
//funtion sum a to b
int f1(int a[]){
    return sizeof(a);
}
int f2(int a[10005]){
    return sizeof(a);
}
int main(){
    int a[10005],n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> a[i];
	cout <<f1(a) << endl;
	cout <<f1(a) << endl;
}