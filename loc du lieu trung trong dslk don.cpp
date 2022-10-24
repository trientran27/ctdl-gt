#include<bits/stdc++.h>
using namespace std;

set <int> st;
int main(){
	int n;
	cin >>n;
	int a[n+5];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=0; i<n; i++){
		if(st.find(a[i])==st.end()){
			st.insert(a[i]);
			cout <<a[i] <<" ";
		}
	}
}
