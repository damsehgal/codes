#include <bits/stdc++.h>
using namespace std;
long long int a[10000000000000];
long long int sigma(long long int x){
	for(int i=0;(i*i)<x;i++)
	long long int sum=0;
	{
		if(x%i==0)sum+=x+x/i;
	}
	if(i*i==x)sum+=i;
	return sum;
}
long long int abc(long long int x){
	if(a[x]==0)
}
int main(int argc, char const *argv[])
{

	return 0;
}
