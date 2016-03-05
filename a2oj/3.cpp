#include <iostream>
#include <stdio.h>
using namespace std;
long long int phi(long long int x){
	int count=0;long long int y=x;
	long double pro=x;
	for(int i=2;(i*i)<=y;)
	{long double db=(long double)i;
		if(x%i==0){pro*=(1-(1/db));
		while(x%i==0){
			x/=i;

		}
	
	}
		if(i==2)i=3;
		else i+=2;	
	}if(x>1)pro*=(1-(float)1/x);
	return (long long int)pro;

}
long long int PHI2(long long int x){
	
	//only prime factors and there multiples will be counted
	//number of factors in log (n)
	long long int y=x;
	//long long int pro=1;
	for(long long int i=2;(i*i)<=x;){
		if (x%i==0)
		{
			while(x%i==0)x/=i;
			y-=y/i;
		}
		if(i==2)i=3;
		else i+=2;
	}
	if(x>1)y-=y/x;
	return y;
}
int main(int argc, char const *argv[])
{
	long long int n;
	scanf("%lld",&n);
	while(n!=0){
		printf("%lld\n",phi2(n));
		scanf("%lld",&n);
	}
	return 0;
}