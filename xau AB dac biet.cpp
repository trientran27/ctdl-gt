#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
vector <string> v;

void in(){
	int h=k;
	int kt=0;
	for(int i=1; i<=n; i++){
		if(a[i]==0){
			h--;
			if(h==0) kt=1;//thoa man
			else if(h<0) kt=0;// day dai hon
		}else{
			h=k;//xet tiep
		}
	}
	if(kt==1){
		string tmp= "";
		for(int i=1; i<=n; i++){
			if(a[i]==0) tmp +='A';
			else tmp +='B';
		}
		v.push_back(tmp);
	}
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			in();
		}else{
			Try(i+1);
		}
	}
}
int main(){
	cin >>n >>k;
	Try(1);
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
}

