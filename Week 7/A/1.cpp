#include <bits/stdc++.h>
using namespace std;
int main()
{
    int* pX1;
    cout<<pX1<<endl;     //0x40173b
    cout<<*pX1<<endl;    //1528349827
    *pX1 = 0;
    return 0;
    //l?i v� con tr? ch?a kh?i t?o n�n n� c� th? ch?a gi� tr? r�c

    int* pX2 = NULL;
    cout<<pX2<<endl;     
    cout<<*pX2<<endl;   
    *pX2 = 0;
    return 0;


    int* p = new int;
    int* p2 = p;
    *p = 10;
    cout << *p2 << endl;    
    delete p;
    cout << *p2;   
    //l?i v� gi?i ph�ng b? nh? s?m         
}
