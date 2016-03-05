#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,c2=0,c3=0,c5=0,c7=0;
	cin>>a;
	long long int b;
	cin>>b;
	while(b>0){
		int x=b%10;
		switch(x){
			case 2 :
			{
				c2++;
				break;
			}
			case 3 :
			{
				c3++;
				break;
			}
			case 4 :
			{
				c3++;
				c2+=2;
				break;
			}
			case 5 :
			{
				c5++;
				break;
			}
			case 6 :
			{
				c3++;
				c5+=1;
				break;
			}
			case 7 :
			{
				c7++;
				break;
			}
			case 8 :
			{
				c7++;
				c2+=3;
				break;
			}
			case 9 :
			{
				c3+=2;
				c2+=1;
				c7++;
				break;
			}
			default :
			break;
		}
		b/=10;
	}	
	while(c7--)cout<<7;
	while(c5--)cout<<5;
	while(c3--)cout<<3;
	while(c2--)cout<<2;
	return 0;
}
	