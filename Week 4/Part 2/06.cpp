#include<bits/stdc++.h>
using namespace std;

class Item{
	public:
	string name;
	int price;
	int quantities;
		double totalMoney(int SoLuong, double GiaThanh);
		bool canBuy(int Tien,vector<Item> product);
};



bool cmp(Item a, Item b){
	return a.name < b.name;
}
int main(){
	double money;
	cout << "So Tien Ban Co: ";
	cin >> money;
	int n;
	cin >> n;
	vector<Item> buying(n);
	for(int i = 0; i < buying.size(); i++){
		cin.ignore();
		cout << "Nhap ten san pham: ";
		getline(cin,buying[i].name) ;
		cout << "Nhap gia san pham: ";
		cin >> buying[i].price;
		cout << "Nhap so luong san pham: ";
		cin >> buying[i].quantities;
	}
	sort(buying.begin(),buying.end(),cmp);
	int thietyeu;
	cout << "So Luong Mat Hang Thiet Yeu Can Mua: ";
	cin >> thietyeu;
	cin.ignore();
	while(thietyeu--){
		string s;
		getline(cin,s);
		for(int i = 0; i < n; i++){
			if(s == buying[i].name){
				money -= (buying[i].price * buying[i].quantities);
				buying.erase(buying.begin() + i);
				n--;
			}
		}
	}
	int Min = INT_MAX,sum = 0,sum1 = 0,Min1 = INT_MAX;
	int toTal;
		for(int i = 0; i < buying.size(); i++){
			toTal += buying[i].quantities * buying[i].price;
		}
	if(toTal <= money){
		cout << "CO THE MUA TAT CA CAC SAN PHAM";
	}
	else
	if(money < 0){
		int option;
		cout << "Ban khong du tien, nhap lua chon 1 hoac 2: " << endl;
		cout <<"1.Mua tat ca mat hang co gia thanh tren 1 dv san pham re nhat"<<endl;
		cout <<"2.Mua tat ca mat hang co tong gia tri (tren danh sach can mua) la re nhat"<<endl;
		cin >> option;
		switch(option){
			case 1:
				for(int i = 0; i < buying.size(); i++){
					Min = min(Min,buying[i].price);
				}
				for(int i = 0; i < buying.size(); i++){
					if(Min == buying[i].price){
						cout << "San Pham Ban Mua Duoc La: ";
						cout << buying[i].name <<" "<< buying[i].price <<" "<<buying[i].quantities;
					//	return 0;
					}
				}
				break;
			case 2:
					for(int i = 0; i < buying.size(); i++){
						sum = buying[i].price * buying[i].quantities;
						Min1 = min(Min1,sum);
					}
					for(int i = 0; i < buying.size(); i++){
						sum1 = buying[i].price * buying[i].quantities;
						if(sum1 == Min1){
							cout << "San Pham Ban Mua Duoc La: ";
							cout << buying[i].name <<" "<< buying[i].price <<" "<<buying[i].quantities;
						//	return 0;
						}
					}
					break;
			default:
				break;
		}
	}
	

}
