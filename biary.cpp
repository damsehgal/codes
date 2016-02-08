#include<bits/stdc++.h>
using namespace std;
float fun(float x){
	return x*x*x-2*x-1;
}
int main()
{
	float a,b,m,p=0.0001;//m is mid point
	printf("enter the value of two number between which root exists"); 
	scanf("%f%f",&a,&b);
	m=(a+b)/2;
	while(fun(b)-fun(a)>p){

	if(fun(a)*fun(m)<0)
	{
		b=m;
		m=(a+b)/2;
	}
	else if(fun(m)*fun(b)<0){
		a=m;
		m=(a+b)/2;
	}
	else{
		printf("root doesn't exist");
		break;
	}
	}
	
	printf("%f",m);
	return 0;
}
