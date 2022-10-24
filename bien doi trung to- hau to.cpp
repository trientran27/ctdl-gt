#include<bits/stdc++.h>
using namespace std;

int pri(char c){//xet thu tu uu tien giua cac dau
	if(c=='^') return 5;
	if(c=='*' || c=='/') return 4;
	if(c=='+' || c=='-') return 3;
	return 2;
}
void solve(){
	string s, ans="";
	cin >>s;
	stack<char> st;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='A' && s[i]<='Z') ans+=s[i];
		else if(s[i]>='a' && s[i]<='z') ans+=s[i];//cac chu cai
		else if(s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while(st.size() && st.top()!='('){// luu dau trong "()" vao ans
				ans+= st.top();
				st.pop();
			}
			st.pop();//xoa "("
		}else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
			while(st.size() && pri(st.top()) >= pri(s[i])){
				ans+=st.top();// luu dau uu tien hon cua stack vaof ans
				st.pop();
			}
			st.push(s[i]);//luu dau dang xet vao stack
		}
	}
	while(st.size()){// truong hop trong stack co moi "(" maf k co ")" tuong ung
		if(st.top()!='(') ans+=st.top();
		st.pop();
	}
	cout <<ans <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
}

