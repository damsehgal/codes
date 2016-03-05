//to show the edges in the graph using matrix
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	int a[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=0;
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		x--;y--;
		a[x][y]=1;
	}
	int Queries;
	cin>>Queries;
	while(Queries--){
		int x,y;
		cin>>x>>y;
		if(a[x-1][y-1]!=0)
			cout<<"There exist a Path";
		else
			cout<<"No Path Found";
	}

/*	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=0){
				cout<<i+1<<"-->"<<j+1<<"\n";
			}
		}
	}*/	
	return 0;
}