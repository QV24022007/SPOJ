#include <iostream>
using namespace std;

long long countTrailingZeros(int n) {
    int count = 0;
    
    while (n >= 5) {
        n = n / 5;
        count = count + n;
    }
    
    return count;
}

int main() {
//	freopen("inp.inp","r",stdin);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,a;
    cin >> n;
    for (int i = 1; i<=n;i++){
    	cin >>a;
		long long result = countTrailingZeros(a);
		cout <<result<<"\n"; 
	}
    

    return 0;
}

