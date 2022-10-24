#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];
set <string> st;
vector <string> v;

void in(){
	for(int i=1; i<=k; i++){
		cout <<v[a[i]-1] <<" ";
	}
	cout <<endl;
}
void sinh(int i){
	for(int j=a[i-1]+1; j<=v.size()-k+i; j++){
		a[i]=j;
		if(i==k){
			in();
		}else{
			sinh(i+1);
		}
	}
}
int main(){
	cin >>n >>k;
	for(int i=1; i<=n; i++){
		string s;
		cin >>s;
		if(st.find(s)==st.end()){//neu xau chua co trong set
			st.insert(s);
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());//sap xep lai
	sinh(1);
}

