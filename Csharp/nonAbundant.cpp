#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
bool isAbundace(int x){
	int sum=1;

	for(int i=2;;i++)
	{
		if(i*i<x)
		{
			if (x%i==0)sum+=((x/i)+i);
		}
		else if(i*i==x)sum+=i;
		else break;
	}
	if (sum>x){ v.push_back(x);return true;}
	return false;
}
int main(int argc, char const *argv[])
{
	bool flag;
	long long int sum=0;
	for(int i=2;i<28123;i++)isAbundace(i);//all even
	for(int i=945;i<28123;i+=15)isAbundace(i);
	int length=v.size();
	sort(v.begin(),v.begin()+length-1);
	//all sorted are present in it
	//for(int i=0;i<length;++i)cout<<v[i]<<" ";
	for(int j=0;j<length;++j){
		v[j]*=2;
		sum+=v[j];
	/*
		for(int  i=0,k=length-1;i<length,k>0,i<k;){
			if(v[i]+v[k]==j){sum+=j;break;}
			else if(v[i]+v[k]<j)i++;
			else k--;
			cout<<sum<<" "<<j<<endl;
		}
	*/}cout<<sum;
		
	return 0;
}
//all abundant numbers are either even or are divisible by 15; 


//391257568->sum of all non doubled abundant number
