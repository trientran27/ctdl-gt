#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1005], x[1005];
vector<int> v;
void in(){
	for(int i=1; i<=k; i++){
		cout <<v[a[i]-1] <<" ";
	}
	cout <<endl;
}
void Try(int i){
	for(int j=a[i-1]+1; j<=v.size()-k+i; j++){
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	cin >>n >>k;
	set<int>st;
	for(int i=0; i<n; i++){
		cin >>x[i];
		if(st.count(x[i])==0){
			st.insert(x[i]);
			v.push_back(x[i]);
		}
	}
	sort(v.begin(), v.end());
	Try(1);
}

