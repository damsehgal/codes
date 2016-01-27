#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{

	long long int t;
	cin>>t;
	while(t!=0){
		long long int sum=0;
		std::vector<long long int> v1,v2;
		for(long long int i=0;i<t;i++){
			int lm;
			cin>>lm;
			v1.push_back(lm);
		}
		for(long long int i=0;i<t;i++){
			long long int lm;
			cin>>lm;
			v2.push_back(lm);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		for(long long int i=0;i<t;i++){
			sum+=(v1[i]*v2[t-i-1]);
		}
		cout<<sum<<"\n";
		cin>>t;
	}	
	return 0;
}