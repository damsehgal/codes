#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int max1=0,max2=0;
	while(n--){
		int x,y;
		cin>>x>>y;
		max1+=y-x;
		if(max2<max1)max2=max1;
	}
	cout<<max2;
	return 0;
}