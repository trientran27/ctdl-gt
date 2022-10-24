#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

void next(set<int> s){
	int i=k;//bat dau tu bit cuoi
	while(i>=0 && a[i]==n-k+i){
		i--;//neu a[i] dat cau hinh max thi dich trai
	}
	if(i==0){
		cout <<k;
	}else{
		a[i]++;//tang a[i] len 1 don vi
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;//tang cac bit sau a[i] leen 1 don vi
		}
		int dem=0;
		for(int j=1; j<=k; j++){
			if(s.count(a[j])==0) dem++;//neu bit cau hinh tiep theo khong co o cau hinh truoc
		}
		cout <<dem;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		set <int> s;
		for(int i=1; i<=k; i++){
			cin >>a[i];
			s.insert(a[i]);
		}
		next(s);
		cout <<endl;
	}
}

