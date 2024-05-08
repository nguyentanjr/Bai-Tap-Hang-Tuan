#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<float> ps(n);
    float sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ps[i];
        sum += ps[i];
    }
    float avr = sum / n;
    float var = 0;
    for (int i = 0; i < n; i++) {
        var += pow(ps[i] - avr, 2);
    }
    var /= n;
    cout << tb << " " << var;
    return 0;
}

