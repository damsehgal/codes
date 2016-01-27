#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	if(a.length()<7){cout<<"NO";return 0;}
	for(int i=0;i<=a.length()-6;i++){
		if((a[i]=='0'&& a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0')||(a[i]=='1'&& a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1'))
		{cout<<"YES";return 0;}
	}cout<<"NO";
	return 0;
}