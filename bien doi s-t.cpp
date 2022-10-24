#include<bits/stdc++.h>
using namespace std;

void bd(int s, int t){
	int a[20005];
	for(int i=0; i<=20000; i++) a[i]=INT_MAX;
	queue<int> qe;
	a[s]=0;
	qe.push(s);
	while(a[t]==INT_MAX){
		int x=qe.front();
		qe.pop();
		if(x-1>0 && a[x-1]==INT_MAX){
			a[x-1]=a[x]+1;
			qe.push(x-1);
		}
		if(x*2<20000 && a[x*2]==INT_MAX){
			a[x*2]=a[x]+1;
			qe.push(x*2);
		}
	}
	cout <<a[t] <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int s, t;
		cin >>s >>t;
		bd(s, t);
	}
}
