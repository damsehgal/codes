#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int vm[n],vf[n];
		for(int i=0;i<n;i++)cin>>vm[i];
		for(int i=0;i<n;i++)cin>>vf[i];
		sort(vm,vm+n);
		sort(vf,vf+n);
		int sum=0;
		for(int i=0;i<n;i++)sum+=(vm[i]*vf[i]);
		cout<<sum<<endl;
	}
	return 0;
}