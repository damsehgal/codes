#include <bits/stdc++.h>
using namespace std;
bool check(int x,int &c25,int &c50,int &c100){
	if(x==25)
	{
		c25++;
		return true;
	}
	else if(x==50)
	{
		if(c25>=1)
			{c25--;c50++;return true;}
		return false;
	}
	else if(x==100){
		if(c50>=1 && c25>=1){
			c100++;
			c50--;
			c25--;
			return true;
		}
		else if(c25>=3){
			c25-=3;
			return true;
		}
		return false;
	}
}
int main(int argc, char const *argv[])
{	
	int t;bool flag=true;
	cin>>t;
	int c25=0,c50=0,c100=0;
	std::vector<int> v(t);		
	for(int i=0;i<t;i++){
		cin>>v[i];
	}
	if(v[0]!=25)flag=false;
	else{
		for(int i=0;i<v.size();i++){
			//cout<<"c25="<<c25<<"c50="<<c50<<"c100="<<c100<<"\n";
			if(!(check(v[i],c25,c50,c100))){flag=false; break;}
		}
	}
	if(flag)cout<<"YES";
	else cout<<"NO";
	return 0;
}
	