#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n+1]={0};
	int kq=0;
	for(int i=0; i<n; i++){//tim day con tang dai nhat
		int k;
		cin >>k;
		a[k]=a[k-1]+1;//neu phan tu k-1 xuat hien roi thi tang bien dem cua day
		kq = max(kq, a[k]);//tim max cua day
	}
	cout <<n-kq;
}

