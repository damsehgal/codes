#include<iostream>
using namespace std;
//a*b=c
//logc=logb+loga
//loga=1 logb=4 logc=4
//loga=2 logb=3 logc=4
int num[9];

bool check(int x,int y){
	//if(x==39 && y==186)cout<<"THIS IS THE CASE";
	int a,b=x,sum=0,pro=1;

	for(int i=10;b!=0;i*=10){
		a=b%10;
		b=x/i;

		sum+=a;
		pro*=a;
		//cout<<num[a-1];
		//if(a==0)return false;
		if(num[a-1]==1) return false;
		num[a-1]=1;
	}
	b=y;
	for(int i=10;b!=0;i*=10){
		a=b%10;
		b=y/i;
		sum+=a;
		pro*=a;
		if(a==0)return false;
		if(num[a-1]==1 )return false;
		num[a-1]=1;
	}
	b=x*y;
	for(int i=10;b!=0;i*=10){
		a=b%10;
		b=(x*y)/i;
		sum+=a;
		pro*=a;
		if(a==0)return false;
		if(num[a-1]==1) return false;
		num[a-1]=1;
	}
	//cout<<pro<<" ";//my assumption is wrong :-(
	if(sum==45 && pro==362880)return true;
	return false;
}


int main(int argc, char const *argv[])
{//assume a<b;
	for(int a=1;a<10000;a++){
		for(int b=a+1;b<100000;b++){
			for (int i = 0; i < 9; ++i)
			{
				num[i]=0;
			}
			if(check(a,b))cout<<"a="<<a<<"  "<<"b="<<b<<"  a*b="<<a*b<<endl;
		}
	}
	return 0;
}

//6952+7852+5796+5346+4396+7254+7632