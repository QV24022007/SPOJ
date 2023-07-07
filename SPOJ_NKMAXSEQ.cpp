#include <iostream>
using namespace std;
int main(){
//	freopen("inp.inp","r",stdin);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n,p;
	cin >> n >> p;
	long long A[100000];
	long long Total[100000] = {};
	for (int i = 1; i<= n;i++){
		cin >> A[i];
	}
	Total[1] = A[1];
	for (int i = 2 ; i<=n;i++){
		Total[i] = Total[i-1] + A[i];
	}
	long long Max = p;
	
	for (int i = 1 ; i<=n;i++){
		for (int j = i ; j <=n;j++){
			if(Total[j]-Total[i-1] >= Max ){
				cout << j-i+1;
				exit(0);
			}	
		}
	}
	cout <<"-1";
}
