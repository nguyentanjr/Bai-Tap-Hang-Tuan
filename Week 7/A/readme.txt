1.#include<bits/stdc++.h>
using namespace std;
int main() {
    char c = 'A', d = 'B';   //C:0x1234 B:0x5678
    char* p1 = &c;
    char* p2 = &d;
    char* p3;
    p3 = &d;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;//*p3 = B,p3 = 0x5678,
    p3 = p1;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;//*p3 = A,p3 = 0x1234
    *p1 = *p2;
    cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;//*p1 = A,p1 = 0x1234

}


2.
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;

(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5; lệnh này

3.
char c = ‘C';
double *p = &c;
con trỏ char không thể trỏ vào double
