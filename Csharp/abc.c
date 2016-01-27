#include<iostream>
#include<stdio.h>
#inclode<conio.h>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
		int a[t]=1;




	if (t%100==0 ){goto ab;}
	else if(t%100!=0 && t%4==0){goto ab;}
	else cout<<"0";



	ab:
	if(t%400==0){cout<<"1";}
	return 0;
}


