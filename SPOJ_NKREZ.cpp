#include <bits/stdc++.h>
using namespace std;
struct hop{
	int start,end,time;
}A[10000];
bool dk_sort(hop a,hop b){
	return a.end < b.end;
}
int main(){
	freopen("inp.inp","r",stdin);
	int n,B[10000],Trace[10000],C[10000];
	cin >>n;
	for (int i = 1; i<=n;i++){
		cin >> A[i].start >> A[i].end;
		A[i].time = A[i].end - A[i].start;
		B[i] = A[i].time;
	}
	sort(A+1,A+n+1,dk_sort);
	
	int temp = 0;
	int answer = temp;
	for (int i = 1; i<=n;i++){ 
		for (int j = 1 ; j<i;j++ ){
			if(A[i].start >= A[j].end && B[i] < B[j] + A[j].time){
				B[i] = B[j] + A[j].time;
//				C[i] = C
				Trace[i] = j;
				answer = max(answer,B[i]);
			}
		}
//		answer += temp;
	}
	cout <<answer;

	
}
