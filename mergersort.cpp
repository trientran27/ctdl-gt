#include<bits/stdc++.h>
using namespace std;

//tron haimang con da duoc sap xep
void merge(int a[], int l, int m, int r){
	vector<int> x(a+l, a+m+1);//gan gia tri mang a tu l->m
	vector<int> y(a+m+1, a+r+1);//gan gia tri mang a tu m+1->r
	int i=0, j=0;
	while(i<x.size() && j<y.size()){//tron 2 day
		if(x[i]<=y[j]){
			a[l]=x[i];
			l++, i++;
		}else{
			a[l]=y[j];
			l++, j++;
		}
	}
	while(i<x.size()){//neu x con du
		a[l]=x[i];
		l++, i++;
	}
	while(j<y.size()){//neu y con du
		a[l]=y[j];
		l++, j++;
	}
}
void mergesort(int a[], int l, int r){
	if(l>=r) return;
	int m=(l+r)/2;
	mergesort(a, l, m);
	mergesort(a, m+1, r);
	merge(a, l, m, r);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		mergesort(a, 0, n-1);
		for(int i=0; i<n; i++){
			cout <<a[i] <<" ";
		}
		cout <<endl;
	}
}

