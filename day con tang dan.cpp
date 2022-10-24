#include<bits/stdc++.h>
using namespace std;

int n, a[1005], x[1005];
vector<string> v;
void nhap(){
	string s="";
	for(int i=1; i<=n; i++){
		if(a[i]==1){
			s+= to_string(x[i])+' ';
		}
	}
	v.push_back(s);
}
int dk(){
	int gtt=0, dem=0;
	for(int i=1; i<=n; i++){
		if(a[i]==1 & x[i]<gtt){
			return 0;
		}
		if(a[i]==1 && x[i]>gtt){
			dem++;
			gtt=x[i];
		}
	}
	if(dem<2) return 0;
	return 1;
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			if(dk()){
				nhap();
			}
		} 
		else Try(i+1);
	}
}
int main(){
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>x[i];
	}
	Try(1);
	stable_sort(v.begin(), v.end());
	for(auto x:v){
		cout <<x <<endl;
	}
}


