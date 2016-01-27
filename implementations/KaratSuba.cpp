#include <bits/stdc++.h>
using namespace std;
int Karat(int x,int y)
{

	int l=x,i=0,k=y,j=0;
	while(l>0){
		l/=10;
		i++;
	}
	i/=2;
	while(k>0){
		k/=10;
		j++;
	}
	j=j/2;
	if(i<=1 || j<=1)return x*y;
	int a=x/pow(10,i);
	int b=x%(int)pow(10,i);
	int c=y/pow(10,j);
	int d=x%int(pow(10,j));
	return pow(10,i+j)*Karat(a,c)+pow(10,i/2)*Karat(a,d)+pow(10,j/2)*Karat(b,c)+Karat(b,d);
}
int main(int argc, char const *argv[])
{
	cout<<Karat(1234,5678);
	return 0;
}
