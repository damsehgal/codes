#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int Next(long long int x){
	long long int a=0,b=x;
	while(b!=0){
		v.push_back(b%10);
		b/=10;
	}reverse(v.begin(),v.end());


	int i=v.size()-1;
	while(i>0 && v[i-1]>=v[i])i--;
	if(i<=0)return 0;
	int j=v.size()-1;
	while(v[j]<=v[i-1])j--;
	v[j]^=v[i-1];
	v[i-1]^=v[j];
	v[j]^=v[i-1];
	while(i<j){
		v[j]^=v[i];
		v[i]^=v[j];
		v[j]^=v[i];
		i++;
		j--;
	}
	for (int i = pow(10,v.size()-1),j=0; j < v.size(); i/=10,j++)
	{
		a+=(v[j]*i);
		//returns reverse of numbers
	}
	return a;
}
int main(int argc, char const *argv[])
{
	
	return 0;
}