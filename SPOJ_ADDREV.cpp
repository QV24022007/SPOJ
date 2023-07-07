#include <iostream>
using namespace std;
string add(string a,string b){
	int x,y,temp =0,tong;
	string result ="";
	
	while (a.length() > b.length()) b = "0" + b;
	while (b.length() > a.length()) a = "0" + a;
	for (int i = a.length()-1 ; i>=0;i--){
		x = int(a[i]) -48;
		y = int(b[i]) -48;
		tong = x+y+temp;
		temp = tong/10;
		result = char(tong%10 +48) +result;
	}
	if (temp == 1) result = "1" + result;
	return result;
}
string rever(string b){
	while(b[b.length() - 1] == '0') b.erase(b.length()-1,1);
	int n = b.length() - 1;
	for (int i = 0 ; i<=n/2 ; i++){
		swap(b[i],b[n-i]);
	}
	return b;
}

int main(){
	freopen("inp.inp","r",stdin);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a,b;
	int T;
	cin >> T;
	for (int i = 1 ; i <=T ; i++){
		cin >> a >> b;
		cout <<rever(add(rever(a),rever(b)))<<"\n";
	}
}
