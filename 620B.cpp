#include <bits/stdc++.h>
using namespace std;
long long int Count(int x){
	long long int count=0; 
	while(x>0){
		int a=x%10;
		if(a==0|| a==6||a==9)count+=6;
		else if(a==1)count+=2;
		else if(a==2||a==3||a==5)count+=5;
		else if(a==4)count+=4;
		else if(a==7)count+=3;
		else count+=7;
		x/=10;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int x1,y1;
	cin>>x1>>y1;
	long long int count=0;
	for(int i=x1;i<=y1;i++)count+=Count(i);
		cout<<count;
	return 0;
}