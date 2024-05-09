#include<bits/stdc++.h>
using namespace std;
//funtion sum a to b
int count_even(int* a, int n){
    int res = 0;
	for(int i = 0 ; i < n; i++){
        if (a[i] % 2 == 0) res++;
    }
	return res;
}
int main(){
    int a[10005],n;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> a[i];
	cout <<count_even(a, n) << endl;
	cout <<count_even(a + 5, n) << endl;
}