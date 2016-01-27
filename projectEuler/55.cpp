#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool isPanil(int x){
int  temp=x,rev=0;
	while(temp!=0)
	{
		rev=(rev*10)+(temp%10);
		temp/=10;
	}
	if(rev==x)return true;
	return false;
}

bool NEXT(unsigned long long int x,int count){
	if(count>50)return false;
	unsigned long long int  temp=x,rev=0;
	while(temp!=0)
	{
		rev=(rev*10)+(temp%10);
		temp/=10;
	}
	cout<<rev<<" "<<count<<endl;
	if(isPanil(NEXT(x+rev,count+1)))return true;
}
int main(int argc, char const *argv[])
{	int count=0;
	/*for(int i=1;i<=1000;i++){
		if(!NEXT(i,0))count++;
	}cout<<count;*/
		NEXT(196,0);
	return 0;
}