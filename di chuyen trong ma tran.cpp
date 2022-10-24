#include<bits/stdc++.h>
using namespace std;

int m, n, dem, a[100][100];

void Try(int i, int j){
	if(i==m-1 && j==n-1){//cau hinh cuoi
		dem++;
		return;
	}
	if(i<m-1 ){//di xuong
		Try(i+1, j);
	}
	if(j<n-1){//sang phai
		Try(i, j+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>m >>n;
		dem=0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >>a[i][j];
			}
		}
		Try(0, 0);
		cout <<dem <<endl;
	}
}

