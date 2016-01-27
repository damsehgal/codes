#include <iostream>
using namespace std;
#ifndef PER
#define PER 1000007
#endif
unsigned long long int a[1000001];
unsigned long long int MOD(unsigned long long int x)
{
	if(x==0)return 0;
	else if(x==1)return 2;
	else{
		if(a[x]!=0)return a[x]%PER;
		else return(a[x]=((MOD(x-1)%PER)+((3*x)-1)%PER)%PER);
	}
}
int main(int argc, char const *argv[])
{	for(int i=2;i<1000001;i++)a[i]=0;
	a[0]=0;a[1]=2;
	int t;cin>>t;
	while(t--){
		unsigned long long int z;
		cin>>z;
		cout<<MOD(z)<<"\n";
	}
	
	return 0;
}