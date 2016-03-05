#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int j=0;
	while(v[j]>=v[k-1] && v[j]>0){
		j++;
	}
	cout<<j;
	return 0;
}
	