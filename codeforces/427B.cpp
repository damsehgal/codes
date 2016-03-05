#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,k;
	cin>>n>>t>>k;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int count=0;
	for (int i = 0; i < n-k+1; ++i)
	{
		int max=-1;
		for(int j=0;j<k;j++){
			if(v[i+j]>max)max=v[j+i];
			//cout<<v[j]<<"   "<<max<<"\n";
			//cout<<"aalo\n";
		}

		if(max<=t){count++;}
	}
	cout<<count;
	return 0;
}