#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100005]; 
	in >> n;
	for(int i = 0; i < n; i++) cin >>a[i];
	int Max = INT_MIN, Min = INT_MAX;
	int res = 0, t = 0;
	for(int i = 0; i < n; i++){
		Max = max(Max ,a[i]);
		Min = min(Min ,a[i]);
		if(a[i] % 2 == 0) res++;
		else t++;
	}
	cout << Max << Min << res << t;
}
