#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	double t,sum=0;
	cin>>t;
	std::vector<double> v(t);
	for (int i = 0; i < t; ++i)
		{
			cin>>v[i];
			sum+=v[i];
		}	
	double avg=sum/t;
	cout<<fixed<<setprecision(12)<<avg;	
	return 0;
}