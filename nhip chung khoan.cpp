#include<bits/stdc++.h>
using namespace std;

void xuly(int n, int a[], int b[])
{
	stack <int> st;
	st.push(1);
	b[1]=1;
	for(int i=2;i<=n;i++){
		int res=1;
		while(st.size() && a[i]>=a[st.top()]){
			res+=b[st.top()];
			st.pop();
		}
		b[i]=res;
		st.push(i);
	}
	for(int i=1;i<=n;i++) cout << b[i] << " ";
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++) cin >> a[i];
		xuly(n,a,b);
	}
}


