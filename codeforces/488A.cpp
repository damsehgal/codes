#include <bits/stdc++.h>
using namespace std;
bool isLucky(long long int x){
	x=abs(x);
	while(x){
		if(x%10==8)return true;
		x/=10;
	}return false;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int i=1;
	
	while(!isLucky (abs(i+t)))i++;
	cout<<i;
	return 0;
}