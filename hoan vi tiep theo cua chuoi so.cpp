#include<bits/stdc++.h>
using namespace std;

int k;
string s;


void next(string s){
	int n=s.length();
	int a[100];
	for(int i=1; i<=n; i++){
		a[i]=s[i-1]-48;
	}
	int i=n-1;//bat dau tu bit thu 2 ben phai
	while(i>=1 && a[i]>=a[i+1]){
		i--;//tim vi tri a[i]<=a[i+1] dau tien
	}
	if(i==0){//neu cau hinh cuoi cung
		cout <<"BIGGEST";
	}else{//neu khong thi tang a[i] len 1 don vi
		int j=n;
		while(a[i]>=a[j]){
			j--;//tim phan tu a[j] dau tien lon hon a[i]
		}
		swap(a[i], a[j]);//hoan vi 2 phan tu do cho nhau
		reverse(a+i+1, a+n+1);//lat nguoc mang tu i+1 toi n
		for(int i=1; i<=n; i++){
			cout <<a[i];
		}
	}
}
int main(){
	int t;
	cin >>t;
	for(int i=1; i<=t; i++){
		cin >>k >>s;
		cout <<k <<" ";
		next(s);
		cout <<endl;
	}
}
