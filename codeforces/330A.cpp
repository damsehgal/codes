#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int r,c;
	cin>>r>>c;
	char a[r][c];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin>>a[i][j];
			
		}
	}
	bool flag;
	int countR=0,countC=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		{
			if(a[i][j]=='.')flag=true;
			else{flag=false; break;}
		}
		if(flag)countR++; 
	}
	
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++)
		{
			if(a[j][i]=='.')flag=true;
			else{flag=false; break;}
		}
		if(flag)countC++; 
	}
	
	cout<<(c*countR)+(r-countR)*countC;



	return 0;
}