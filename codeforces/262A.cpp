#include <bits/stdc++.h>
using namespace std;
bool NUM(int x,int k){
	int count=0;
	while(x>0){
		int y=x%10;
		if(y==4 || y==7)count++;
		x/=10;
	}
	if(count>k)return false;
	return true;
}
int main(int argc, char const *argv[])
{
	int n,k,count=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(NUM(x,k))count++;
	}
	cout<<count;
	return 0;
}