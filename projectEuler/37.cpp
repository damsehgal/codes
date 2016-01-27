#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
bool isPrime(long long int i){
	if(i<2)return false;
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(long long int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}
bool truncateLTOR(long long int x){
	long long int b=x,a=0;bool flag=true;
	for(long long int i=1;b!=0;i*=10){
		a+=i*(b%10);
		flag=flag && isPrime(a);
		flag=flag && isPrime(b);
		b/=10;

	}return flag;
}

int main(int argc, char const *argv[])
{int count=0,sum=0;
	for(long long int i=11;count<11;i+=2){
		if(truncateLTOR(i)){
			sum+=i;
			count++;
		}
	}
	cout<<sum;
	return 0;
}