#include<bits/stdc++.h>
using namespace std;

struct cv{
	int dau;
	int cuoi;
};
bool dk(cv a, cv b){
	return a.cuoi<b.cuoi;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int b[n];
		cv c[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
			c[i].dau=a[i];
		}
		for(int i=0; i<n; i++){
			cin >>b[i];
			c[i].cuoi=b[i];
		}
		sort(c, c+n, dk);
		int dem=1,k=0;
		for(int i=1; i<n; i++){
			if(c[i].dau >=c[k].cuoi){
				dem++;
				k=i;
			}
		}
		cout <<dem <<endl;
	}
}

