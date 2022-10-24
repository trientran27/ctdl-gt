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
		cv a[n];
		for(int i=0; i<n; i++){
			cin >>a[i].dau >>a[i].cuoi;
		}
		sort(a, a+n, dk);
		int dem=1, k=0;
		for(int i=1; i<n; i++){
			if(a[i].dau>= a[k].cuoi){//ket thuc cong viec truoc nho hon thoi gian dau cong viec sau
				dem++;
				k=i;
			}
		//	cout <<a[i].dau <<" " <<a[i].cuoi <<endl;
		}
		cout  << dem<<endl;
	}
}

