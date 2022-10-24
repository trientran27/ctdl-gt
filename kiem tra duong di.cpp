#include<bits/stdc++.h>
using namespace std;
bitset<1005> vs;
vector<int> a[1005];
void Dfs(int s,int t)
{
	vs[s]=1;
	for(int j:a[s])
	{
		if(vs[j]==0) Dfs(j,t);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int v,e,x,y;
		cin >> v >> e;
		for(int i=1;i<=v;i++) a[i].clear();
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int q; cin >> q;
		while(q--)
		{
			for(int i=1;i<=v;i++) vs[i]=0;
			cin >> x >> y;
			Dfs(x,y);
			if(vs[y]==1) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}

