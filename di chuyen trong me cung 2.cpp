#include<bits/stdc++.h>
using namespace std;

int n, a[10][10];
char c[1000];
vector<string> v;
void Try(int i, int j, int k){
	if(i==n-1 && j==n-1){
		string s="";
		for(int l=1; l<k ; l++){
			s+=c[l];
		}
		v.push_back(s);
		return;
	}
	if(i+1 <n && a[i+1][j]){//xuong duoi
		c[k]='D';
		a[i+1][j]=0;
		Try(i+1, j, k+1);
		a[i+1][j]=1;
	}
	if(j-1>=0 && a[i][j-1]){//sang trai
		c[k]='L';
		a[i][j-1]=0;
		Try(i, j-1, k+1);
		a[i][j-1]=1;
	}
	if(j+1 <n && a[i][j+1]){//sang phai
		c[k]='R';
		a[i][j+1]=0;
		Try(i, j+1, k+1);
		a[i][j+1]=1;
	}
	if(i-1 >=0 && a[i-1][j]){//len tren
		c[k]='U';
		a[i-1][j]=0;
		Try(i-1, j, k+1);
		a[i-1][j]=1;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >>a[i][j];
			}
		}
		if(a[0][0]==1 && a[n-1][n-1]==1){
			a[0][0]=0;//danh dau
			Try(0,0,1);
		}
		if(v.size()!=0){
			for(int i=0; i<v.size(); i++){
				cout <<v[i] <<" ";
			}
		}else{
			cout <<-1;
		}
		cout <<endl;
		v.clear();
	}
}

