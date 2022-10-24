#include<bits/stdc++.h>
using namespace std;

int n, k;
int x[1005];
void solve(set<int> st){
	int i=k;
	while(i>=1 && x[i]==n-k+i){
		i--;
	}
	if(i==0) cout <<k;
	else{
		int dem=0;
		x[i]+=1;
		for(int j=i+1; j<=k; j++){
			x[j]=x[j-1]+1;
		}
		for(int j=1; j<=k; j++){
			if(st.count(x[j])==0){
				dem++;
			}
		}
		cout <<dem;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		set<int> st;
		for(int i=1; i<=k; i++){
			cin >>x[i];
			st.insert(x[i]);
		}
		solve(st);
		cout <<endl;
	}
}


