#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool isPrime(int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}
int next(int x){
	int a1;
	int b=x;
	a1=b%10;
	b/=10;//179->917->9 is in a1 b has 17 i want to attach it like string its C++ .... :-(
	string s1 =to_string(a1)+to_string(b); 
	int numb;
	istringstream ( s1 ) >> numb;
	return numb;
}
bool isCircular(int x){
	bool flag=false;int b=x;
	for(int i=10;b!=0;i*=10){
		//a=b%10;
		if(isPrime(next(x))){flag=true;x=next(x);}
		
		else {flag=false;break;}
		b=x/i;
	}
	return flag;
}

int main(int argc, char const *argv[])
{int count=4;//not including 2,3,5,7
	for(int i=11;i<1000000;i++){
	    if(isPrime(i)){
		if(isCircular(i)){cout<<i<<" ";count++;}
	}}
cout<<count;
	return 0;
}