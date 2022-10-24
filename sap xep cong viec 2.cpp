#include<bits/stdc++.h>
using namespace std;

struct cv{
	int jb;
	int dl;
	int pt;
};
bool dk(cv a, cv b){
	if(a.pt != b.pt) return a.pt > b.pt;
	return a.dl<b.dl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		cv a[n];
		for(int i=0; i<n; i++){
			cin >>a[i].jb >>a[i].dl >>a[i].pt;
		}
		sort(a, a+n, dk);
		int ans=0, sum=0, check[1005]={0};
		for(int i=0; i<n; i++){
			for(int j=a[i].dl-1; j>=0; j--){
				if(check[j]==0){
					check[j]=1;
					ans++;
					sum+=a[i].pt ;
					break;
				}
			}
		}
		cout <<ans <<" " <<sum <<endl;
	}
}
