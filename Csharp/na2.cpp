#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
std::vector<int> v1;
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


int main()
{int length=v.size();
	/* code */long long int sum=0;
	for(int i=12;i<28123;i++){
		isAbundace(i);

	}
	for(int i=0;i<28123;++i){v1.push_back(v1[i]+x);}
	for (int i = 0; i < 28123/2; ++i)
	{
		sum+=i*v[length-i-1]+v1[i];
	}
	cout<<sum;

	return 0;
}