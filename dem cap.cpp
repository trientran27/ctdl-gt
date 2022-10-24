#include<bits/stdc++.h>
using namespace std;

int cnt[5];
//tim kiem phan tu dau tien trong mang b lon hon x
int timkiem(int b[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int m=(r+l)/2;
		if(b[m]>x){
			res=m;
			r=m-1;
		}else{
			l=m+1;
		}
	}
	return res;
}
int ketqua(int b[], int m, int x){
	if(x==0){
		return 0;//khong co phan tu nao thoa man 0^y>y^0
	}
	if(x==1){
		return cnt[0]; //1^0 >0^1
	}
	int v= cnt[0]+cnt[1];//khi x>=2 thi y=0/=1 luon thoa man
	int l=timkiem(b, 0, m-1, x);
	if(l!=-1) v+=m-l;
	if(x==2){//2^y>y^2 khi y khac 3,4
		v-=(cnt[3]+cnt[4]);
	}
	if(x==3){
		v+=cnt[2];//3^2>2^3
	}
	return v;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m;
		cin >>n >>m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		for(int i=0; i<m; i++){
			cin >>b[i];
			if(b[i]<=4){
				cnt[b[i]]++;
			}
		}
		sort(b, b+m);
		long long dem=0;
		for(auto x:a){
			dem+=ketqua(b, m, x);
		}
		cout <<dem <<endl;
		memset(cnt, 0, sizeof(cnt));
	}
}




