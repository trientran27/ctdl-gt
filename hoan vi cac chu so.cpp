#include<bits/stdc++.h>
using namespace std;

int n , k, ans;
int a[10];
string s[10];
bool used[10];
//tim khoang cach giua hai so lon be trong 1 hoan vi
int distance(){
	int Max= INT_MIN, Min= INT_MAX;
	for(int i=0; i<n; i++){
		int tmp=0;
		for(int j=0; j<k; j++){
			tmp = tmp*10 + (s[i][a[j]]-'0');
		}
		Max= max(Max, tmp);
		Min= min(Min, tmp);
	}
	return Max-Min;
}
void Try(int i){// quay lui hoan vi
	for(int j=0; j<k; j++){
		if(used[j] == false){
			a[i] = j;
			used[j] = true;
			if(i==k-1){
				ans = min(ans, distance());
			}else{
				Try(i+1);
			}
			used[j] = false;
		}
	}
}
int main(){
	ans=INT_MAX;
	memset(used, false, sizeof(used));//khoi tao cac gia tri false
	cin >>n >>k;
	for(int i=0; i<n; i++){
		cin >>s[i];
	}
	Try(0);
	cout <<ans;
}

