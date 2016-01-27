#include <iostream>
using namespace std;
long long int GCD(long long int x,long long int y){
	if(y==0)return x;
	return GCD(y,x%y);
}
int main(int argc, char const *argv[])
{
	long long int t;

	cin>>t;
	for(int i=0;i<t;i++){
		long long int x,y,z;
		cin>>x>>y>>z;
		if(z%GCD(x,y)==0)
			cout<<"Case "<<i+1<<": Yes\n";
		else 
			cout<<"Case "<<i+1<<": No\n";
	}
	return 0;
}