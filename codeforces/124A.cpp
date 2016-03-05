#include <bits/stdc++.h>
using namespace std;
int max(int x,int y){
	if(x>y)return x;
	return y;
}
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<a-max(b+1,a-c)+1;
	return 0;
}
	