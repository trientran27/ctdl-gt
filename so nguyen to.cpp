#include<bits/stdc++.h>
using namespace std;

int n, p, s, k;
int d[202], x[100];
vector<vector<int>> v;
vector<int> a;

void snt(){
	for(int i=2; i<=202; i++){
		d[i]=1;//gan gia tri 1
	}
	for(int i=2; i*i<=202; i++){
		if(d[i]){
			for(int j=2; i*j<=202; j++){
				d[i*j]=0;
			}
		}
	}
}
void in(){
	int sum=0;
	vector<int> b;
	for(int i=1; i<=n; i++){
		sum+=a[x[i]];
		b.push_back(a[x[i]]);
	}
	if(sum==s){
		v.push_back(b);
	}
}
void Try(int i){
	for(int j=x[i-1]+1; j<=k-n+i; j++){//to hop chap n cua k phan tu trong mang a
		x[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
int main(){
	snt();
	int t;
	cin >>t;
	while(t--){
		cin >>n >>p >>s;
		a.clear();
		v.clear();
		a.push_back(0);//de duyet tu 1
		for(int i=p+1; i<=s; i++){
			if(d[i]){
				a.push_back(i);
			}
		}
		k=a.size()-1;//loai bo phan tu dau
		Try(1);
		cout <<v.size() <<endl;
		for(vector<int> it:v){
			for(int z:it){
				cout <<z <<" ";
			}
			cout <<endl;
		}
	}
}

