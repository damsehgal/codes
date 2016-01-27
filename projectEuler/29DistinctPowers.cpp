#include<iostream>
#include<math.h>
//done with mah total=99*99 -dulicates taken power wise ans=9183
using namespace std;
bool a2[2][100];
int main(int argc, char const *argv[])
{	int count2=-1;//taking 2^1
	for(int i=0;i<2;i++){for(int j=0;j<100;j++)a2[i][j]=false;}
	for (int i = 0; i <2 ; ++i)
	{
		for(int j=0;j<100;j++){
			if(((i*100)+(j+1))%(i+1)==0)a2[i][j]=true;
		}
	}
	for(int i=0;i<2;i++){for(int j=0;j<100;j++){if(a2[i][j])count2++;}}
	cout<<count2;
}