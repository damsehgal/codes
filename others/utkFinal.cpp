#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
    int t;
    cin>>t;
    while(t--)
    {
		int n,k;
		cin>>n>>k;
		std::vector<int> v(n),ans(k+1);
		ans[0]=0;
		for(int i=0;i<n;i++)
		cin>>v[i];
		int m;
		for(int i=1;i<=k;i++)
		{
			m=ans[i-1];
			for(int j=0;j<n;j++)
			{
				if(ans[i-v[j]]+v[j] <=i)
				m=max(ans[i-v[j]]+v[j],m);
			}
			ans[i]=m;
		}
		cout<<ans[k]<<"\n";
	
    }
    return 0;
}