#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define LIM 10000

int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))

void BitSeive()
{
	register int i,j,k;
	for(i=3;i<LIM;i+=2)
	{
		if(!ifComp(i))
		{
			for(j=i*i,k=i<<1;j<MAX;j+=k)
				isComp(j);
		}	
	}
	flagArr[2]=1;
	//printf("2 ");
	
}


void abc(int x)
{
	int count=0;
	for(int i=0;i<=x;i++){
		if(flagArr[i])cout<<i;
	}
	//cout<<count;
	long double a=(long double)abs(((count -(long double)(x/log(x)))/count))*100;
	cout<<fixed<<setprecision(1)<<a<<"\n";

}

int main(int argc, char const *argv[])
{	
	

	//we have to calculate number of false before a nnumber x	
	int t;
	//cout<<"a";
	cin>>t;
	while(t!=0){
		abc(t);
		cin>>t;
	}



	return 0;
}