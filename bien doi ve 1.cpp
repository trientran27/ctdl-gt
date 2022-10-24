#include<bits/stdc++.h>
using namespace std;

int n, ans; 

void Try(int res, int tmp){
	if(res==1){
		ans= min(ans, tmp);
		return;
	}
	if(res==0) return;
	if(res%3==0){
		Try(res/3, tmp+1);
	}
	else if( (res-1)%3==0 ){
		Try( (res-1)/3 , tmp+2);
	}
	else{
		Try((res - 2) / 3, tmp + 3);
	}
	if( res%2==0){
		Try(res/2, tmp+1);
	}
	else {
		Try( (res-1)/2 , tmp+2);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		ans=INT_MAX;
		Try(n,0);
		cout <<ans <<endl;
	}
}
