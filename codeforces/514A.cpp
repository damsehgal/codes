#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string x;
	cin>>x;
	for (int i = 0; i < x.length(); ++i)
	{
		if(x[i]=='5')x[i]='4';
		else if(x[i]=='6')x[i]='3';
		else if(x[i]=='7')x[i]='2';
		else if(x[i]=='8')x[i]='1';
		else if(x[i]=='9' && i>0)x[i]='0';
	}
	cout<<x;

	return 0;
}