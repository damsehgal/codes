#include <bits/stdc++.h>
using namespace std;
struct abc
{
	char a;
	int d;
};
// bool compare(const& abc a1,const & abc a2)
// {
// 	return a2.d<a1.d;
// }

int main(int argc, char const *argv[])
{
	long long int sum=0;
	string s;
	cin>>s;
	int k;cin>>k;
	abc al[26];
	int max=-1,maxI=0;
	for(int i=0;i<26;i++){
		int lm;
		cin>>lm;
		if(lm>max){max=lm;maxI=i;}
		al[i].a=97+i;
		al[i].d=lm;
	}
	for(int i=0;i<k;i++){
		s+=al[maxI].a;
	}
	
	for(int i=0;i<s.length();i++){
		sum+=(al[s[i]-97].d)*(i+1);
	}
	cout<<sum;
	
	return 0;
}