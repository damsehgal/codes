#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int count=0;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if((x+y+z)>=2)count++;
	}
	cout<<count;
	return 0;
}
	