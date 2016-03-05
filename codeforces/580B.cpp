#include <bits/stdc++.h>
using namespace std;
struct abc
{
	long long int cash;	
	long long int factor;
};
bool comare(const abc& a,const abc& b){
	return a.cash<b.cash;
}
int main(int argc, char const *argv[])
{
	long long int n,d;
	cin>>n>>d;
	std::vector<abc> v(n);
	for (long long int i = 0; i < n; ++i)
	{
		cin>>v[i].cash>>v[i].factor;
	}
	int maxFact=0;
	for (int i = 0; i < v.size(); ++i)
	{
		if(maxFact<v[i].factor)maxFact=v[i].factor;
	}
	sort(v.begin(), v.end(),comare);
	if(v[v.size()-1].cash-v[0].cash<d){
		long long int sum=0;
		for(long long int i=0;i<v.size();i++)
			sum+=v[i].factor;
		cout<<sum;
	}

	else{
		deque<abc> myDeque;
		long long int maxsum=0;
		long long int i;
		for( i=0;i<v.size();i++){
			if(v[i].cash-v[0].cash>d)break;
			myDeque.push_back(v[i]);
			//cout<<v[i].cash;
			maxsum+=v[i].factor;
		}
		for(long long int j=1;j<v.size();j++){	
			long long int dummy = maxsum - myDeque.back().factor;
			myDeque.pop_front();
			while( i<v.size() && v[i].cash-myDeque.front().cash>d){
				myDeque.push_back(v[i]);i++;
			}
			if(dummy>maxsum)maxsum=dummy;
		}
		if(maxFact>maxsum)maxsum=maxFact; 
		 cout<<maxsum;

	}
	return 0;
}