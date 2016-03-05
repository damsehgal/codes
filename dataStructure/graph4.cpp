#include <bits/stdc++.h>
using namespace std;
std::vector<bool> visited;
void dfs(int i,std::vector<std::vector<int> >& v){
	visited[i]=true;
	//cout<<i+1<<" ";
	cout<<i<<" ";
	for(int j=0;j<v[i].size();j++){
		
		if(!visited[v[i][j]]){
		
			dfs(v[i][j],v);
		}
	}
}
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	visited.resize(n);
	for(int i=0;i<n;i++)visited[i]=false;
	std::vector<std::vector<int> > v(n);
	int cnt=0;
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		x--;y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=0;i<n;i++){
		if(!visited[i])
		{	
			dfs(i,v);
			cnt++;
		}
	}
	cout<<cnt<<"\n";

	return 0;
}