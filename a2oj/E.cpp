#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,b;bool flag=true;
	cin>>a>>b;
	int i=0,j=0;
	while(a[i]=='0'){
		i++;
	}
	while(b[j]=='0'){
		j++;
	}
	string c="",d="";
	for(;i<a.length();i++){
		c+=a[i];
	}
	for(;j<b.length();j++){
		d+=b[j];
	}
	//cout<<c.length()<< ","<<d.length();
	if(c.length()>d.length())cout<<">";
	else if(c.length()<d.length())cout<<"<";
	else {
		for (int i = 0; i < d.length(); ++i)
		{
			if(c[i]>d[i]){cout<<">";flag=false;break;}
			else if(c[i]<d[i]){cout<<"<";flag=false;break;}
		}if(flag)cout<<"=";
	}	
	
	return 0;
}