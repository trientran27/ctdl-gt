#include<bits/stdc++.h>
using namespace std;
bitset<1005> vs;
int res[1005];
vector<int> a[1005];
vector<int> ans;

void Dfs(int s,int t)
{
	if(vs[t]) return;
	vs[s]=1;
	for(int j:a[s])
	{
		if(vs[j]==0){
			res[j]=s;
			Dfs(j,t);
		} 
	}
}

int main()
{
	int w;
	cin >> w;
	while(w--)
	{
		int v,e,x,y,s,t;
		cin >> v >> e >> s >> t;
		for(int i=1;i<=v;i++){
			vs[i]=0;
			a[i].clear();
			res[i]=0;
		}
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
		}
		ans.clear();
		Dfs(s,t);
		if(vs[t]==1){
			int u=t;
			while(u>0){
				ans.push_back(u);
				u=res[u];
			}
			for(int i=ans.size()-1;i>=0;i--) cout << ans[i] << " ";
		}
		else cout << "-1";
		cout << endl;
	}
}
