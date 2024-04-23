#include <bits/stdc++.h>
using namespace std;

int convert(double a){
    return static_cast<int>(a+0.5);
}
int main () {
	double a;
    cin >> a;
    cout << convert(a);
} 

