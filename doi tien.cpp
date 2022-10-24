#include<bits/stdc++.h>
using namespace std;

int n, dem;
int check[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1}; 

void dt(int x, int k){
	if(x>0){
		while(x>=check[k]){
			x-=check[k];
			dem++;
		}
		dt(x, k+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		dem=0;
		dt(n,0);
		cout <<dem <<endl;
	}
}

