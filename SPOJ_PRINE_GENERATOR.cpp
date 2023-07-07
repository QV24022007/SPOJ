#include <iostream>
#include <cstring>
using namespace std;

int main() {
		freopen("inp.inp","r",stdin);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t,Max = 0;
	cin >>t;
	int a[1000],b[1000];
	for (int i = 1 ; i <=t;i++){
		cin >> a[i] >> b[i];
		Max = max(Max,b[i]);
	}
	int n = Max;
    bool* A = new bool[n];
    memset(A, true, n * sizeof(bool));
    A[1] = 0; 
    for (int i = 2 ; i*i<=n ; i++){
    	if(A[i]==true)
    	for (int j = i*i ; j<=n ; j+=i ){
    		A[j] = 0;
		}
	}
	for (int i = 1 ; i<=t ; i++){
		for (int j = a[i] ; j<=b[i] ; j++){
			if(A[j]) cout <<j<<"\n";
		}
		cout <<"\n";
	}
}

