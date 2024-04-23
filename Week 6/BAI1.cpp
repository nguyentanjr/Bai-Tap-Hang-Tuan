#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin >> n >> m >> k;
	char a[1000][1000];
	int dx[8] = {-1,0,1,-1,1,-1,0,1};
	int dy[8] = {-1,-1,-1,0,0,1,1,1};
	srand(time(NULL));
	memset(a,'0',sizeof(a));
	for(int i = 0 ; i < k ; i++){
		int x,y;
		x = rand() % n;
		y = rand() % m;
		a[x][y] = '.';
	}
	while(true){
		int x,y;
		cin >> x >> y;
		if(a[x][y] != '.'){
			a[x][y] = '0';
			int res = 0;
			for(int i = 0 ; i < 8; i++){
				if(a[dx[i]][dy[i]] == '.')res++;
			}
			cout << "So bom xung quanh: " << res << endl;
		}
		else {
			cout <<"You Are Dead!"<<endl;
			for(int i = 0 ; i < n; i++){
				for(int j = 0 ; j < m; j++){
					cout << a[i][j] <<" ";
				}
				cout << endl;
			}
			return 0;
		}
	}
}
