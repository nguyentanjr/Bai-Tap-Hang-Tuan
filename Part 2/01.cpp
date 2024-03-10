#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n,a[10005],sum = 0,odd = 0,Max = INT_MAX,Min = INT_MIN;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		Max = max(Max,a[i]);
		Min = min(Min,a[i]);	
		if(a[i] % 2 == 0)sum += a[i];
		else odd++;
	}
	cout << Max <<" "<< Min <<" "<<sum <<" " << odd;
}

