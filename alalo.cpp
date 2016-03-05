#include <bits/stdc++.h>
using namespace std;
long long ans[100];
long long ANS(int x){
	if(ans[i]!=-1)return ans[i];
	return ans[i]=ANS(x-1)+ANS(x-2);
}
int main(int argc, char const *argv[])
{
	for(int i=0;i<100;i++)ans[i]=-1;
	ans[1]=1;
	ans[2]=2;
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		cout<<ANS(x)<<"\n";
	}
	return 0;
}