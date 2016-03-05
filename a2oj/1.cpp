#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	if((t%4==0) || (t%7==0) || (t%47==0) || (t%74==0) || (t%447==0) ||(t%474==0) ||(t%477==0) ||(t%747==0))cout<<"YES";
	else cout<<"NO";
	return 0;
}