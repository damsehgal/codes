#include <iostream>
using namespace std;
unsigned long long int retmod(unsigned long long int a,unsigned long long int b,unsigned long long int c){
	unsigned long long int r=1;
	while(b>0){
		if(b&1)r=r*a%c;
		b/=2;
		a=a*a%c;
	}
	return r;
}
bool isPrime(unsigned long long int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}

unsigned long long int GCD(unsigned long long int a,unsigned long long int b){
	unsigned long long int r,i;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void Factors(unsigned long long int a){
	if(a==1 || a==0){cout<<1; return;}
	if(isPrime(a)){cout<<a; return;}
	unsigned long long int b=2;
	while(GCD((retmod(2,b,a)-1),a)==1){
		b*=(b+1);cout<<"b="<<b<<" ";
	}
	unsigned long long int d=GCD((retmod(2,b,a)-1),a);
	cout<<d<<" ";
	Factors(a/d);
}
int main(int argc, char const *argv[])
{

	Factors(26);
	//if(GCD(retmod(2,b,a)))
	
	
	return 0;
}