#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p[n],count=-1;
	for(int i=0;i<n;i++)
	cin>>p[i];
	bool flag=true;
	for(;flag;)
	{
		flag=false;
		count++;
		for(int i=n-1;i>0;i--)
		{ 
		    
			if(p[i]>p[i-1])
			{
				flag=true;
				for(int j=i;j>=0;j--)
				{
					p[j+1]=p[j];
				}
			n--;
			}
		}
	}
	cout<<count;
	return 0;
}