#include<bits/stdc++.h>
using namespace std;

int n;
int a[20][20], x[20], cmin=1e9, sum, ans;
int  check[20];
//ban chat day cung la bai tim hoan vi
void Try(int i){
	for(int j=2; j<=n; j++){
		if(check[j]==0){
			check[j]=1;
			x[i]=j;
			sum+=a[x[i-1]][j];//tinh khoang cach tu thanh pho truoc toi thanh pho dang xet
			if(i==n){
				ans=min(ans, sum+a[j][1]);//tim duong di ngan nhat
			}else if( (sum + cmin*(n-i+1)) <ans){//neu tong hien tai cong voi tich cua doan duowng ngan nhat giua 2 thanh pho voi so thanh pho chua di < ans// cong 1 vi con quay lai 1
				Try(i+1);
			}
			check[j]=0;
			sum-=a[x[i-1]][j];
		}
	}
}
int main(){
	memset(check, 0, sizeof(check));
	ans=1e9, sum=0;
	x[1]=1;//duyet tu 2;
	cin >>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >>a[i][j];
			cmin= min(cmin, a[i][j]);//tim doan duong ngan nhat giua 2 thanh pho
		}
	}
	Try(2);
	cout <<ans;
}

