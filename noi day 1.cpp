#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		priority_queue<int, vector<int>, greater<int>> st;//khi push 1 phan tu nao no se sap xep
		for(int i=0; i<n; i++){
			cin >>a[i];
			st.push(a[i]);//ngan xep se duoc xep tu nho to lon
		}
		long long sum=0;
		while(st.size()>1){//con it nhat 2 phan tu
			int x=st.top();
			st.pop();//xuat ra
			int y=st.top();
			st.pop();//xuat ra
			st.push(x+y);//nhap x+y vap stack
			sum+=x+y;
			//cout <<x+y <<" ";
		}
		cout <<sum <<endl;
	}
}

