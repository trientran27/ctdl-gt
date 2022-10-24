#include<bits/stdc++.h>
using namespace std;
int vs[1005];
vector<int> a[1005];

void Dfs(int u)
{
	vs[u]=1;
	for(int i:a[u])
	{
		if(vs[i]==0) Dfs(i);
	}
}

void canhcau(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			int e=a[i][j];
			a[i].erase(a[i].begin()+j);
			Dfs(i);
			int ok=0;
			for(int k=1;k<=n;k++)
				if(vs[k]==0){
					ok=1;
					break;
				}
			if( ok && i < e) cout << i << " " << e << " ";
			a[i].insert(a[i].begin()+j,e);
			memset(vs,0,sizeof(vs));
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,e,x,y;
		cin >> n >> e;
		for(int i=1;i<=n;i++){
			a[i].clear();
		}
		memset(vs,0,sizeof(vs));
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		canhcau(n);
		cout << endl;
	}
}


