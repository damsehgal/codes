#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){
		long long int a,sum=0;
		cin>>a;
		while(a!=0){
			sum+=a/5;
			a/=5;
		}
		cout<<sum<<endl;
	}
	return 0;
}