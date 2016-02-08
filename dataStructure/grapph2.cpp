//to show the edges in the graph using list
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	std::vector<std::vector<int> > v(n);
	
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		x--;y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int Q;
	cin>>Q;
	while(Q--){
		int x,y;
		cin>>x>>y;
		x--;y--;
		if(v[x].size()>v[y].size()){
			for(int i=0;i<v[y].size();i++){
				if(v[y][i]==x)
					{
						cout<<"Found\n";
						goto aloo;
					}
			}
			cout<<"NO\n";
			aloo: ;
		}
		else{
			for(int i=0;i<v[x].size();i++){
				if(v[x][i]==y)
					{
						cout<<"Found\n";
						goto kaloo;
					}
			}
			cout<<"NO\n";
			kaloo: ;
		}
	}
	return 0;
}