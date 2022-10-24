#include<bits/stdc++.h>
using namespace std;

int n,k;
int check[100],a[100];
int dk=0;
void xuat(){
	dk=1;
	cout <<"[";
	int dem=0;
	for(int i=1;i<=n;i++){
		if(check[i]==1){
			if(dem==0){
				cout<<a[i];
				dem=1;
			}else{
				cout<<" " <<a[i] ;
			}
		}
	}
	cout <<"]" <<" ";
}
void Try(int i,int sum){
	if(sum>k) return;//xet tiep
	for(int j=i;j<=n;j++){
		check[j]=1;
		sum+=a[j];
		if(sum==k) xuat();
		else Try(j+1,sum);
		sum-=a[j];
		check[j]=0;
	}
}
int main(){	
	int t;
	cin >>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			check[i]=0;
		}
		sort(a+1,a+n+1);
		Try(1,0);
		if(dk==0) cout <<"-1";
		else dk=0;
		cout <<endl;
	}
}

