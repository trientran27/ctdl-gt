#include<bits/stdc++.h>
using namespace std;
bitset<1005> vs;
vector<int> a[1005];
vector<int> ans;
int res[1005];
void Bfs(int s, int t)
{
	queue<int> q;
	q.push(s);
	vs[s]=1;
	while(q.size())
	{
		s=q.front();
		q.pop();
		for(int i:a[s])
		{
			if(vs[i]==0){
				vs[i]=1;
				res[i]=s;
				q.push(i);
			}
		}
	}
}

int main()
{
	int w; cin >> w;
	while(w--)
	{
		int v,e,s,t,x,y;
		cin >> v >> e >> s >> t;
		for(int i=1;i<=v;i++)
		{
			res[i]=0;
			vs[i]=0;
			a[i].clear();
		}
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
		}
		Bfs(s,t);
		ans.clear();
		if(vs[t]==0) cout << "-1";
		else{
			int u=t;
			while(u>0){
				ans.push_back(u);
				u=res[u];
			}
			for(int i=ans.size()-1;i>=0;i--) cout << ans[i] << ' ';
		}
		cout << endl;
	}
}
