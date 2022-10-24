#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int top=0;
	int a[1005];
	while(cin>>s){
		if(s=="push"){
			int n;
			cin >>n;
			a[top++]=n;
		}
		else if(s=="pop"){
			top--;
		}else if(s=="show"){
			if(top>0){
				for(int i=0; i<top; i++){
					cout <<a[i] <<" ";
				}		
			}else{
				cout <<"empty";
			}
			cout <<endl;
		}
	}
}

