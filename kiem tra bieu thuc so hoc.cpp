#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		bool ok;
		stack<char> st;
		for(int i=0; i<s.length(); i++){
			if(s[i]==')'){
				ok=true;
				char kt=st.top();
				st.pop();
				while(kt!='('){
					if(kt=='+' || kt=='-' || kt=='*' || kt=='/'){
						ok=false;
					}
					kt=st.top();
					st.pop();
				}
				if(ok) break;
			}else{
				st.push(s[i]);
			}
		}
		if(ok==true) cout <<"Yes";
		else cout <<"No";
		cout <<endl;
	}
}


