#include <bits/stdc++.h>
using namespace std;
int MAX(std::vector<int> &v){
	int max=v[0];
	for (int i = 0; i < v.size(); ++i)
	{
		if(max<v[i])max=v[i];	
	}
	return max;
}
int MIN(std::vector<int> &v){
	int min=v[0];
	for (int i = 0; i < v.size(); ++i)
	{
		if(min>v[i])min=v[i];	
	}
	return min;
}
void Count(std::vector<int> &v,int  min,int max){
	int Cmin=0,Cmax=0;
	long long int pro;
	for(int i=0;i<v.size();i++)if(v[i]==min)Cmin++;
	for(int i=0;i<v.size();i++)if(v[i]==max)Cmax++;
	if(min!=max)pro=Cmin*Cmax;
	else pro=(Cmin*(Cmax-1))/2;
	cout<<max-min<<" "<<pro;
}
int main(int argc, char const *argv[])
 {
 	int t;
 	cin>>t;
 	std::vector<int> v(t);
 	for(int i=0;i<t;i++)cin>>v[i];
 	Count(v,MIN(v),MAX(v));
 	return 0;
 } 