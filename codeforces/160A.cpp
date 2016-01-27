#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;float sum=0;
	std::vector<int> v(t);
	for(int i=0;i<t;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	int i;float sum2=0;
	for (int i = 0; i < t; i++)
	{
		sum2+=v[i];
		
		if(sum2>(sum/2.0)){cout<<i+1;break;}
	}
	
	return 0;
}
	