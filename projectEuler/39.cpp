
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{int parr[1000];for (int i = 0; i < 1000; ++i)parr[i]=0;

	for(int a=1;a<1000;a++){
		for(int b=a;(b<=1000) && (b>=a);b++){
			for(int c=b+1;(c<=1000) &&(c<(a+b));c++){
				if(((b*b) +(a*a)) == (c*c))
				{	//cout<<"A="<<a<<"B="<<b<<"C="<<c;
					int p=(a+b+c);
					if(p<=1000)parr[p]++;//cout<<"p"<<" ";
				}
			}
		}
	}
	int ab=-1,de=-1;

	for(int i=0;i<1000;i++){if(de<parr[i]){de=parr[i];ab=i;}}
	cout<<ab;
	
	return 0;
}