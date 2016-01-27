#include<iostream>
//10^7-> 1 000 000 =>2^21
#include<stack>
#include<cstring>
#include<string.h>
#include<sstream>
#include<algorithm>
//#include<string.h>
using namespace std;
stack<int>mystack;

string toBin(int x){
	
	int b=x;
	while(b!=0){
		if(b%2==0)mystack.push(0);
		else mystack.push(1);
		b/=2;
		}
	//unsigned long long int a=0;
		string a="";
	for(int i=1;!mystack.empty();i*=10){
		
		a=a+to_string(mystack.top());
		mystack.pop();
	}
	return a;
}
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
bool isPanil(string a){
    string b=a;
    reverse(b.begin(),b.end());
	if (b==a)return true;
	return false;
}

int main(int argc, char const *argv[])
{int  sum=0;
	//if(isPanil(toBin(10)))cout<<"y";
	for (int i = 1; i < 1000000; i+=2)
	{
		if(isPanil(i) && isPanil(toBin(i)))sum+=i;
	}
	cout<<sum;
	return 0;
}
