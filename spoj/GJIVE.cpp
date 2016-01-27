#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{	int sum=0,i;
	std::vector<int> v;
	for( i=0;i<10;i++){
		int a;
		cin>>a;
		v.push_back(a);
		sum+=v[i];
		if(sum==100){cout<<"100";goto beta;}
		else if(sum>100)goto alpha;
	}
	cout<<sum;goto beta;
	alpha:
	if(abs(100-sum)<=abs(100-(sum-v[i-1])))cout<<sum;
	else cout<<abs(sum-v[i]);
	beta: ;
	return 0;
}