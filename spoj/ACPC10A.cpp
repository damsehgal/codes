#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	float a,b,c;
	cin>>a>>b>>c;
	while(!((a==0) && (b==0) && (c==0)))
	{
		float r1=b/a;
		float r2=c/b;
		if(r1==r2)cout<<"GP "<<r1*c<<"\n";
		else cout<<"AP "<<c+(c-b)<<"\n";
		cin>>a>>b>>c;
	}

	return 0;
}