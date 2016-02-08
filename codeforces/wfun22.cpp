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
	int count=0;long long dist=0;
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++){
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	int min=v[0][0],minI,minJ;
	int i=0;
	std::vector<int> ka;
	ka.push_back(0);
	for(int count=0;count<n;count++){
		int min2=10000000;
		for(int lambda=0;lambda<ka.size();lambda++){
			i=ka[lambda];
			int min1=v[i][0];
			for(int j=0;j<n;j++){
					if(v[i][j]<min1)
					{

						min1=v[i][j];
						// c/out<<min1;
						minI=i;
						minJ=j;
						v[i][j]=10000000;
						v[j][i]=10000000;
					}
				}
			if(min2>min1)min2=min1;
			if(min2==10000000) goto lm;
		}
		dist+=min2;

	}
	lm: cout<<dist;
	return 0;
}