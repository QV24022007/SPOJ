#include <iostream>
using namespace std;
int main(){
	freopen("inp.inp","r",stdin);
	string a,b;
	cin >> a >> b;	
	int j = 0;
	string temp="";
	for (int i = 0; i<a.length();i++){
		if(a[i] == b[j]){
			j++;
			temp+=a[i];
			
			if (j == 5) break;
		}
	}

	if(temp == b) cout <<"1";
	else cout <<"0";
}
