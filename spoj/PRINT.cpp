#include <stdio.h>
#include <iostream>
#ifndef max
#define max 2147483647
#endif
bool a[max];
void PRIMES(long long int x,long long int y){
	for(long long int i=x;i<=y;i++){
		if(a[i]==true)printf("%lld\n",i);
	}

}

int main(int argc, char const *argv[])
{
	
	for(int i=2;i<max;i++)a[i]=true;
	a[0]=false;a[1]=false;
	for(int i=2;(i*i)<max;){
		if(a[i]){
			int j=2;
			while((i*j)<max){
				a[i*j]=false;
				j++;

			}
			std::cout<<i<<" ";
		}
		if(i==2)i++;
		else i+=2;
	}
	std::cout<<"a";
	int t;std::cin>>t;
	while(t--){
		long long int x,y;
		std::cin>>x>>y;
		PRIMES(x,y);
	}
	return 0;
}