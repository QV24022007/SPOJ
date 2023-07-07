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
string nhan_int(string a, int n){
	string result = "0";
	for (int i = 1 ; i<=n;i++){
		result = add(result,a);
	}
	return result;
}
int main(){
	string A[1000] = {};
	string temp = "1";
	for (int i = 1 ; i<=100;i++){
		temp = nhan_int(temp,i);
		A[i] = temp;
	}
	int n,t;
	cin >> n;
	for (int i = 1; i<=n;i++){
		cin >> t;
		cout <<A[t]<<"\n";
	}
	
}
