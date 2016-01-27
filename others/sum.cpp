#include <bits/stdc++.h>
using namespace std;
/*int COMBINE(std::vector<int>& l,std::vector<int>& r,){

	for(int i=0;i<l.size();i++)sum+=l[i];
	for(int i=0;i<r.size();i++)sum+=r[i];
	return sum;
}*/
int Divide(std::vector<int>& v,int& sum)
{	//int sum=0;
	//cout<<sum;
	if(v.size()<2) sum+=v[0];
	else {
		int mid=v.size()/2;
		std::vector<int> l(mid),r(v.size()-mid);
		for(int i=0;i<(mid);i++)l[i]=v[i];
		for(int i=mid;i<v.size();i++)r[i-mid]=v[i];
		Divide(l,sum);
		Divide(r,sum);
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	for(int i=0;i<100;i+=2){v.push_back(i);}
	int sum=0;
	cout<<Divide(v,sum);	
	return 0;
}