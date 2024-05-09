#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
    cin >> a;
    cin.ignore();
    cin >> b;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int res = 0;
    for (int i = 0; i <= len2 - len1; ++i) {
        if (strncmp(str1, str2 + i, len1) == 0)res++;
    }
    cout<<res;
}
