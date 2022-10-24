#include<bits/stdc++.h>
using namespace std;

int n, a[100], cot[100], d1[100], d2[100], dem=0;
void sinh(int i){
	for(int j=1; j<=n; j++){
		if(cot[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1){
			a[i]=j;//dat quan hau vao vi tri ij
			cot[j] = d1[i-j+n] = d2[i+j-1]=0;//danh dau cac vi tri ma quan hau do di chuyen duoc
			if(i==n){
				dem++;
			}else{
				sinh(i+1);
			}
			cot[j] = d1[i-j+n] = d2[i+j-1]=1;//backtrack(tra lai cac vi tri danh dau de thuc hien tiep cac cach khac)
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=1; i<=64; i++){
			cot[i]=d1[i]=d2[i]=1;//gan tat ca gia tri=1
		}
		sinh(1);
		cout <<dem <<endl;
		dem=0;
	}
}
