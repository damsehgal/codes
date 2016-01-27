//if sigma0(A)=b and sigma0(b)=A

#include<iostream>
using namespace std;
int  sumCount(int x)
{int i,sum=1;
	for( i=2;i*i<x;i++){
		if(x%i==0)sum+=i;
		if((x%(x/i))==0)sum+=(x/i);

	}
	if(i*i==x)sum+=i;
	return sum;
}
bool sum1(int x){
	return sumCount(x)<x;
}
int main(int argc, char const *argv[])
{
	/* code */
	int a=0,b;
	//lets assume a>b
	//this implies sum of all factors of a must be greater than a 
	for (int i = 2; i < 10000; ++i)
	{
		/* code */
		int d=sumCount(i);
		if(d>i)
		{
			if(sumCount(d)==i){a+=d+i;cout<<d<<" "<<i<<"  ";}

		}
	}
	cout<<endl<<a;
	return 0;
}