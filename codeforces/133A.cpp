#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cin>>a;bool flag;
	for(int i=0;i<a.length();i++){
		if(a[i]=='H' || a[i]=='9' || a[i]=='Q')
		{
			flag =true; goto deaf;
		}
		else flag =false;	
	}
	deaf:
	if(flag)cout<<"YES";
	else cout<<"NO";
	return 0;

}	