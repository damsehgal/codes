#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,b,k,x;
	cin>>n>>b>>k>>x;
	std::map<int, int> MyMap;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		MyMap[v[i]]++;
	}
	
	return 0;
}