#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void in(int n){
	cout <<"(";
	for(int i=1; i<=n-1; i++){
		cout <<a[i] <<" ";
	}
	cout <<a[n] <<") ";
}
void Try(int i, int k, int sum){
	for(int j=k; j>=1; j--){
		if(sum +j <=n){
			a[i]=j;
			sum+=j;
			if(sum==n) in(i);
			else Try(i+1, j, sum);//xet tong nho hon
			sum-=j;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(1, n, 0);
		cout <<endl;
	}
}

