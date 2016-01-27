#include<iostream>
#include<math.h>
using namespace std;
int fact[10]={1,1,2,6,24,120,720,5040,40320,362880};
bool check(int x){
	int a,b=x,sum=0;

	for(int i=10;b!=0;i*=10){
		a=b%10;
		b=x/i;
		sum+=(fact[a]);
	}
	
	if(sum==x)return true;
	return false;
}
int main(int argc, char const *argv[])
{int count=0;
	for(int i=3;i<100000000;i++){
		if(check(i)){cout<<i<<endl;count+=i;}
	}	
	cout<<"count="<<count;
	return 0;
}