#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
	char a[1000][1000],b[1000][1000];
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int res = 0;
			if(a[i][j] == '*')b[i][j] = '*';
			else
			for(int k = 0; k <= 7; k++){
				if(a[i+dx[k]][j+dy[k]] == '*'){	
					res++;
				}
				b[i][j] = res + '0';
			}
		
		}
	//	cout << endl;
	}
	 for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
		}
}