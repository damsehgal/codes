#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,c1=0,c2=0,c3=0,c4=0;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x==1)c1++;
		else if(x==2)c2++;
		else if(x==3)c3++;
		else if(x==4)c4++;

	}
	int ans=c4+(c2/2);
	if(c2%2==1)
	
	{
		if(c3>=c1)ans+=c3+1;
		else{
			ans++;
			c1-=2;
			if(c3>=c1)ans+=c3;
			else{
				ans+=c3;
				c1-=c3;
				c1=ceil(c1/4.0);
				ans+=c1;
			}
		}
	}
	else
	{
		if(c3>=c1)ans+=c3;
		else 
		{
			//ans+=(c1-c3);
			c1-=c3;
			ans+=c3;
			c1=ceil(c1/4.0);
			ans+=c1;
		}
	}
	cout<<ans;
	return 0;
}
	