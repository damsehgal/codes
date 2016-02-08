#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	float x,y,z;
	cin>>x>>y>>z;
	if(x>1 && y>1 && z>1){
		if(x>y&& y>z)
			cout<<"z^y^x";
		else if(x>y && y==z)
			cout<<"y^z^x";
		else if(x==y && y==z)
			cout<<"x^y^z";
		else if(y>x&& x>z)
			cout<<"z^x^y";
		else if(y>x && x==z)
			cout<<"x^z^y";
		else if(z>y&& y>x)
			cout<<"x^y^z";
		else if(z>y && y==x)
			cout<<"y^x^z";
	}
	else if(x==1 && y>1 && z>1){
		if(y>z)
			cout<<"z^y^x";
		else
			cout<<"y^z^x";
	}
		else if(x>1 && y==1 && z>1){
		if(x>z)
			cout<<"z^x^y";
		else
			cout<<"x^z^y";
	}
		else if(x>1 && y>1 && z==1){
		if(x>y)
			cout<<"y^x^z";
		else
			cout<<"x^y^z";
	}
	else if(x==1 && y==1 && z>1){
		cout<<"z^x^y";
	}
	else if(x>1 && y==1 && z==1){
		cout<<"x^y^z";
	}
	else if(x==1 && y>1 && z==1){
		cout<<"y^x^z";
	}
	else if(x==1 && y==1 && z==1){
		cout<<"x^y^z";
	}
	//<1
	else {
		std::vector<double> v(12);
		v[0]=pow(pow(x,y),z);
		v[1]=pow(pow(x,z),y);
		v[2]=pow(x,y*z);
		v[3]=v[2];
		v[4]=pow(pow(y,x),z);
		v[5]=pow(pow(y,z),x);
		v[6]=pow(y,x*z);
		v[7]=v[2];
		v[8]=pow(pow(z,x),y);
		v[9]=pow(pow(z,y),x);
		v[10]=pow(x,x*y);
		v[11]=v[2];
		int max=0;
		for (int i = 0; i < 12; ++i)
		{
			if(v[max]<v[i])max=i;
		}
		string a[12]={"x^y^z","x^z^y","(x^y)^z","(x^y)^z","y^x^z","y^z^x","(y^x)^z","(y^x)^z","z^x^y","z^y^x","(z^x)^y","(z^x)^y"};
		cout<<a[max];
	}

	return 0;
}