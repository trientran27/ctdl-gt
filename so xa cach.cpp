#include<bits/stdc++.h>
using namespace std;

int n, a[100];
int used[100];

int check(){
	for(int i=2; i<=n; i++){
		if(abs(a[i]-a[i-1])==1){
			return 0;
		}
	}
	return 1;
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==0){//neu phan tu a[j] chua xet
			used[j]=1;//danh dau da xet
			a[i]=j;//gan gia tri cho phan tu trong mang a
			if(i==n){
				if(check()){
					for(int k=1; k<=n; k++){
						cout <<a[k];
					}
					cout <<endl;
				}
			}else{
				Try(i+1);
			}
			used[j]=0;//backtrack
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(used, 0, sizeof(used));//gan gia tri 0 cho mang use
		cin >>n;
		Try(1);
	}
}

