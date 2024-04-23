#include <bits/stdc++.h>
using namespace std;
//write function to change decimal number to binary number
int convert(int n){
    int binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0){
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}
int main () {
    int n;
    cin >> n;
    cout << convert(n);
} 

