#include <bits/stdc++.h>
using namespace std;
bool solve(string s){
    string t=s;
	reverse(s.begin(), s.end());
	if(s==t) return true;
    else return false;
}
int main(){
	int n;
    cin >> n;
    while(n--){
        int a,b,res = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            string s;
            s = to_string(i);
            if(solve(s))res++;
        }
        cout << res << endl;
    }
	
}