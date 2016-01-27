#include <iostream>
using namespace std;

#define Mod 10000000000

int main() 
{
	int N;
	cin>>N;
	long long Temp,Sum=0;
	for( int ii=1 ; ii<=N ; ii++ )
	{
		
		Temp=1;
		for( int jj=1 ; jj<=ii ; jj++ )
		{
			Temp*=ii;
			Temp=Temp%Mod;
		}
		Sum+=Temp;
		Sum=Sum%Mod;
	}
	cout<<Sum;
	return 0;
}