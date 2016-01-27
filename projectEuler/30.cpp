#include<iostream>
using namespace std;
bool check(int x){
	int a,b=x,sum=0;

	for(int i=10;b!=0;i*=10){
		a=b%10;
		b=x/i;
		sum+=(a*a*a*a*a);
	}
	//cout<<sum;
	if(sum==x)return true;
	return false;
}
int main(int argc, char const *argv[])
{int sum=0;
	for (int i = 10; i < 10000000; ++i)
	{
		if(check(i)){cout<<i<<" ";sum+=i;}
	}
	cout<<endl<<sum;
	return 0;
}