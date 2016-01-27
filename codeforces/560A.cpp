#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;bool flag=false;
	cin>>t;
	std::vector<int> v(t);
	for(int i=0;i<t;i++){
		cin>>v[i];
		if(v[i]==1)flag=true;
	}
	if(flag)cout<<"-1";
	else cout<<"1";
	return 0;
}
