#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x,y;
	cin>>n>>x>>y;
	int v[n][n];
	for(int i=0;i<n;i++){for(int j=0;j<n;j++){v[i][j]=y;}}
	for(int i=0;i<n-1;i++){
		int j,k;
		cin>>j>>k;
		v[j-1][k-1]=x;
		v[k-1][j-1]=x;
	}
	for(int i=0;i<n;i++)v[i][i]=10000000;
	int count=0;long long dis=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;count<n-1;count++){
		//cout<<"AALO";
		int min=v[i][0],minI=0;
		for(int j=0;j<n;j++){
			if(min>v[i][j])
				{
					min=v[i][j];
					minI=j;
					
					cout<<min<< " ;";
				}
				//cout<<"\n";
		}
		//for(int lm=0;lm<n;lm++)v[lm][minI-1]=10000000;

		cout<<"\n\n\n";
			
			// for(int kai=0;kai<n;kai++)
			// {	
			// 	for(int kaj=0;kaj<n;kaj++){
			// 		cout<<v[kai][kaj]<<" ";
			// 	}
			// 	cout<<"\n";
			// }	
		dis+=min;

		i=minI;
	}	
	cout<<dis;
	return 0;
}