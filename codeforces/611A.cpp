#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int no;string my,of;
	cin>>no>>of>>my;
	if(my=="week"){
		if(!(no==5 || no==6))cout<<52;
		else cout<<53;
	}
	else {
		if(no<=29)cout<<12;
		else if(no==30)cout<<11;
		else cout<<7;
	}
	return 0;
}