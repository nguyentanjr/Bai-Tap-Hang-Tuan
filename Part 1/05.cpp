#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> ps(n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ps[i];
        sum += ps[i];
    }

    double tb = sum / n;

    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(ps[i] - tb, 2);
    }
    variance /= n;

    cout << tb << endl;
    cout << variance << endl;

    return 0;
}

