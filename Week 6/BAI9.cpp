#include <bits/stdc++.h>
using namespace std;
void random(){
    int a[50];
    for (int i = 0; i < 49; i++){
        a[i] = rand() % 50;
    }
    for (int i = 0; i < 47; i++){
        for (int j = i+1; j < 48; j++){
            for (int k = j+1; k < 49; k++){
                if ((a[i] + a[j] + a[k]) % 25 == 0){
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
  //  return 0;
}

int main () {
	int n;
    cin >> n;
    srand(time(NULL));
    random();
} 

