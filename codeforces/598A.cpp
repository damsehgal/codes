#include <bits/stdc++.h>
using namespace std;
int Count(long long int x){
	long long int i=1,sum=1;
	while(i*2<=x)
		{	
			i*=2;
			sum+=i;
		}
		//cout<<"sum="<<sum<<"\n";
	return sum;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int x;long long int sum;
		cin>>x;
		sum=(x*(x+1))/2;
		sum-=2*Count(x);
		cout<<sum<<"\n";
	}
	return 0;
}