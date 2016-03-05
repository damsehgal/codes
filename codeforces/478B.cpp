#include <bits/stdc++.h>
using namespace std;
long long int NC2(int n){
	return (n*(n-1))/2;
}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	long long int max,min;
	max=NC2(n-m+1);
	if(n%m==0)min=m*NC2(n/m);
	else {
		min=(m-1)*NC2(ceil(n/float(m)));//cout<<min<<",";
		min+=NC2(n-((m-1)*(n/(m-1))));
	}
	cout<<min<<" "<<max;
	return 0;
}