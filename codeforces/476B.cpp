#include <bits/stdc++.h>
using namespace std;
long double fact(long double x){
	if(x==0 || x==1)return 1;
	long double lm=x;
	for (long double i = 2; i < lm;i++)
		x*=i;
	return x;
}
long double NCR(long double n,long double r){
	return fact(n)/(fact(r)*fact(n-r));
}
long double prob(long double Q,long double m){
	if(fmod(Q-m,2)==1)cout<<0;
	else if(m!=0)
		return (prob(m,0)*NCR(Q,m));
		//cout<<NCR(Q,m)<<" "<<pow(Q,2); 
	else {
		return NCR(Q,Q/2)/(pow(2,Q));
	}
}
int main(int argc, char const *argv[])
{
	 string s1,s2;
	 cin>>s1>>s2;
	 long double r=0,t=0;
	 for(long double i=0;i<s1.length();i++){
	 	if(s1[i]=='+')r++;
		else r--;
	}
	long double countQ=0;
	for(long double i=0;i<s2.length();i++){
		if(s2[i]=='+')t++;
		else if(s2[i]=='-')t--;
		else countQ++;
	}
	//cout<<r<<" "<<t<<" "<<countQ;
	 if(countQ==0){
	 	if(r==t)cout<<1;
		else cout<<0;
	}

	else if(r>(t+countQ) || r<(t-countQ))cout<<0;
	else {
		long double lm=abs(r-t);
		cout<<fixed<<setprecision(10)<<	prob(countQ,lm);
		//cout<<countQ<<" "<<lm;
	 }
	
	return 0;
}