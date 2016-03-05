#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,l,m,n,d,count=0;
	cin>>k>>l>>m>>n>>d;
	bool a[d+1];
	for(int i=0;i<=d;i++)a[i]=false;
	for(int j=0;(j*k)<=d;j++)a[j*k]=true;
	for(int j=0;(j*l)<=d;j++)a[j*l]=true;
	for(int j=0;(j*m)<=d;j++)a[j*m]=true;
	for(int j=0;(j*n)<=d;j++)a[j*n]=true;
	for(int i=0;i<=d;i++){
		if(a[i])count++;}
		cout<<count-1;
	return 0;
}