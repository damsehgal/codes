#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;cin>>n;
		std::vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			int l;
			scanf("%d",&l);
			v1.push_back(l);
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int l;
			scanf("%d",&l);
			v2.push_back(l);
		}
		int min=10000000;		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(min>abs(v1[i]-v2[j]))min=abs(v1[i]-v2[j]);

			}
		}
		cout<<min<<"\n";		
	}
	return 0;
}