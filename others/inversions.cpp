#include <bits/stdc++.h>
using namespace std;
static int count;
void MERGE(std::vector<int>& v,std::vector<int>& a,std::vector<int>& b){
	int i=0,j=0,k=0;
	while(i<a.size()&& j<b.size())
	{
		if(a[i]<b[j])
		{
			v[k]=a[i];
			i++;
		}
		else{
			count++;
			v[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<a.size()){
		v[k]=a[i];
		i++;
		k++;
	}
	while(j<b.size()){
		v[k]=b[j];
		j++;
		k++;
	}
	
}
void MERGESORT(std::vector<int>& v){
	if(v.size()<2)return 0;
	int mid=v.size()/2;
	std::vector<int> l(mid),r(v.size()-mid);
	for(int i=0;i<mid;i++)l[i]=v[i];
	for(int i=mid,k=0;i<v.size();i++,k++)r[k]=v[i];
	MERGESORT(l);
	MERGESORT(r);
	MERGE(v,l,r);
}



int main(int argc, char const *argv[])
{	count=0;
	std::vector<int> v(5);
	v[0]=4;
	v[1]=2;
	v[2]=9;
	v[3]=6;
	v[4]=7;
	MERGESORT(v);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
	}
	return 0;
}