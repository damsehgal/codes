#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int na,nb,k,m,maxA,minB;
	cin>>na>>nb>>k>>m;
	std::vector<int> v1(na),v2(nb);
	for(int i=0;i<na;i++){
		cin>>v1[i];

	}
	for(int i=0;i<nb;i++){
		cin>>v2[i];
	}
	maxA=v1[k-1];
	minB=v2[nb-m];
	if(maxA<minB)cout<<"YES";
	else cout<<"NO";
	return 0;
}


