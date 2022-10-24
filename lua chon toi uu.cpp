#include<bits/stdc++.h>
using namespace std;

struct cv{
	int dau, cuoi;
};
bool dk(cv a, cv b){
	return a.cuoi < b.cuoi;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		cv a[n];
		for(int i=0; i<n; i++){
			cin >>a[i].dau >>a[i].cuoi;
		}
		sort(a, a+n, dk);
		int dem=1, k=0;
		for(int i=1; i<n; i++){
			if(a[i].dau>=a[k].cuoi){
				dem++;
				k=i;
			}
		}
		cout <<dem <<endl;
	}
}
