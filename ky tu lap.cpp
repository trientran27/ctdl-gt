#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> s(11);//tao 1 vector xau
int Min=INT_MAX;//tao ki tu lap it nhat
int cnt=0;
int check[100]={0}, a[100];//tao mang a va mang check de danh dau cac phan tu da xet

int kt(string x, string y){//ham kiem tra ky tu lap giua 2 xau
	int d=0;
	int f['Z'+1]={0};//co 26 ki tu tu a->z
	for(int i=0; i<x.size(); i++){
		f[x[i]]++;
	}
	for(int i=0; i<y.size(); i++){
		f[y[i]]++;
	}
	for(char i='A'; i<='Z'; i++){
		if(f[i]==2){
			d++;
		}
	}
	return d;
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(check[j]==0){
			check[j]=1;
			a[i]=j;//dem ky tu lap giua xau truoc va xau dang xet
			int dem=kt(s[a[i-1]],s[j]);
			cnt+=dem;//dem tong cac ki tu lap
			if(i==n && Min>cnt){
				Min=cnt;
			}else if(i<n && Min>cnt){
				Try(i+1);
			}
			check[j]=0;//backtrack
			cnt-=dem;
		}
	}
	
}
int main(){
	cin >>n;
	cin.ignore();
	for(int i=1; i<=n; i++){
		cin >>s[i];
	}
	s[0]="";//khoi tao s0 rong vi ta xet tu s1
	Try(1);
	cout <<Min;
}

