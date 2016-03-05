#include <iostream>
using namespace std;
int bin(int a[],int low,int high,int x){
	if(low>high)return -1;
	int mid=low+(high-low)/2;
	if(a[mid]==x)return mid;
	if(a[mid]<x)return bin(a,mid+1,high,x);
	else return bin(a,low,mid-1,x);
}
int main(int argc, char const *argv[])
{
	int a[10]={12,23,32,41,52,67,71,82,94,1000};
	int t;
	cin>>t;
	while(t!=-1){
		cout<<bin(a,0,10,t);
		cin>>t;
	}
	return 0;
}