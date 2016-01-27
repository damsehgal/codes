#include<iostream>
using namespace std;
int gcd1(int x,int y)
{//30.32s
	if (x==y)return x;
	else if(x>y)return gcd1(x-y,y);
	else return gcd1(x,y-x);
}
int gcd2(int x,int y){
	if (y==0)return x;
	else return gcd2(y,x%y);
}
int main(int argc, char const *argv[])
{
	for(int i=1;i<100;i++){
		for(int j=i+1;j<10000;j++){
			cout<<gcd2(i,j)<<" "<<i<<endl;
		}
	}
	return 0;
}

