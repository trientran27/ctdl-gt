#include<bits/stdc++.h>
using namespace std;

char c;
int a[100], n, k;

int dem=1;
void Try(int i){
	if(dem==k+1){
		for(int j=1; j<=k; j++){
			char x= a[j]+64;
			cout <<x ;
		}
		cout <<endl;
		return;//quay lai cau hinh dau dang xet
	}
	for(int j=i; j<=n; j++){
		a[dem]=j;
		dem++;
		Try(j);
		dem--;
	}
}
int main(){
	cin >>c >>k;
	n = c-64;
	Try(1);
}

