#include<bits/stdc++.h>
using namespace std;

int sum= INT_MIN;//gia tri lon nhat co the
vector <int> v;//tao 1 vecotor de luu cac phuong anb toi uu

void sinh(int a[], int b[], int c[], int n, int m, int i){
	for(int j=0; j<=1; j++){
		c[i]=j;
		if(i==n){
			int t=0, s=0;//the tich va gia tri
			for(int l=1; l<=n; l++){
				if(c[l]==1){
					t+=b[l];//the tich duoc chon
					s+=a[l];//gia tri duoc chon
				}
			}
			if(t<=m && s>sum){//the tich cho phep va tong cua day dang xet hon gia tri truoc do
				sum=s;
				v.clear();//xoa day cu di
				for(int l=1; l<=n; l++){
					v.push_back(c[l]);
				}
			}
		}else{
			sinh(a, b, c, n, m, i+1);
		}
	}
}
int main(){
	int n, m;
	cin >>n >>m;
	int a[n+1], b[n+1], c[n+1];
	for(int i=1; i<=n; i++){// nhap gia tri
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){//nhap the tich
		cin >>b[i];
	}
	sinh(a, b, c, n, m, 1);
	cout <<sum <<endl;
	for(int i=0; i<v.size(); i++){
		cout <<v[i] <<" ";
	}
}

