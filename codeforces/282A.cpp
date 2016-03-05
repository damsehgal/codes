#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int count=0;
	while(t--){
		string a;
		cin>>a;
		if(a=="X++"||a=="++X")count++;
		else count--;
	}
	cout<<count;
	return 0;
}

	
