#include <bits/stdc++.h>
using namespace std;
// void print(long double l,long double r,long double n){
// 	long double x=ceil(log(l)/log(n));
// 	long double y=ceil(log(r)/log(n));	
// 	long long int i,j;
// 	if(x==y)cout<<-1;
// 	else {
// 	for ( i =(long long int)x ,j=pow(n,i); i <=(long long int)y; i++)
// 	{
// 		cout<<j<<" ";	
// 		j*=n;
// 	}
// }}
bool print2(unsigned long long l,long long r,long long n){
	bool flag=true;
	for(long long int i=0;;i++){
		long long k=pow(n,i);
		if(k>=l && k<=r){cout<<k<<" ";flag=false;}
		if(k>r)return flag;
	}


}

int main(int argc, char const *argv[])
{
	long double l,r,n;
	cin>>l>>r>>n;
	if(print2(l,r,n))cout<<"-1";

	return 0;
}