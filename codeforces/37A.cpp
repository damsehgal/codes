#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(), v.end());
	int alpha=0,alphaI=v[0];
	std::vector<int> v2;
	int count=0;
	while(true){
		if(v[alpha]==alphaI)
			{
				count++;
				alpha++;
			}
		else{
			v2.push_back(count);
			count=0;
			alphaI=v[alpha];
		}
		if(alpha>v.size())break;
	}




	int max=v[n-1];
	int max2=v2[0];
	for (int i = 0; i < v2.size(); ++i)
	{
		if(max2<v2[i])max2=v2[i];
	}
	cout<<max2<<" "<<v2.size();
	return 0;
}
	