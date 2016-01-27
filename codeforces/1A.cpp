#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	double n,m,a;
	cin>>n>>m>>a;
	long long int al=ceil(n/a)*ceil(m/a);
	cout<<al;
	return 0;
}