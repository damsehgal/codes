#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//long long int p[10000];
//long long int t[10000000];
//long long int h[10000];
bool check(long long int x){
	double y=((sqrt((x*24)+1))+1)/6;
	if(((floor(y))!=y)&&((ceil(y))!=y))return false;
	y=((sqrt((x*8)+1))+1)/4;
	if(((floor(y))!=y)&&((ceil(y))!=y))return false;
	y=((sqrt((x*8)+1))-1)/2;
	if(((floor(y))!=y)&&((ceil(y))!=y))return false;
	return true;
}
//29395278


int main(int argc, char const *argv[])
{
//	for(int i=0;i<10000;i++){p[i]=((i)*((3*i)-1))/2;}
	for(long long int i=0;i<10000000000;i++){
		long long int t=((i)*(i+1))/2;
		if(check(t))cout<<i<<" "<<t<<"\n";
	}


	return 0;
}