#include<bits/stdc++.h>
using namespace std;

int a[100], cot[100], d1[100], d2[100], check[100][100];
int sum, cnt=0;
void sinh(int i){
	for(int j=1; j<=8; j++){
		if(cot[j]==1 && d1[i-j+8]==1 && d2[i+j-1]==1){
			sum+=check[i][j];//tinh tong cac vi tri
			cot[j] = d1[i-j+8] = d2[i+j-1] = 0;//danh dau cac vi tri quan hau co the di
			if(i==8){
				cnt=max(sum,cnt);
			}else{
				sinh(i+1);
			}
			sum-=check[i][j];//backtrack
			cot[j] = d1[i-j+8] = d2[i+j-1] = 1; //tra lai 1 de xet cac cach khac
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++){
				cin >>check[i][j];
			}
		}
		for(int i=1; i<=64; i++){
			cot[i]=d1[i]=d2[i]=1;//gan cho cac vi tri=1
		}
		sinh(1);
		cout <<cnt <<endl;
		cnt=0;
	}
}

