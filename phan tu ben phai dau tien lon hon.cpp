#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		stack<int> st;
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		for(int i=n; i>1; i--){
			st.push(a[i]);
		}
		for(int i=1; i<=n; i++){
			vector<int> v;
			while(!st.empty()){
				if(a[i]<st.top()){
					cout <<st.top() <<" ";
					break;
				}else{
					v.push_back(st.top());
					st.pop();
				}
			}
			if(st.empty()) cout <<-1 <<" ";
			for(int j=v.size()-1; j>0; j--){
				st.push(v[j]);
			}
		}
		cout <<endl;
	}
}

