#include <bits/stdc++.h>
using namespace std;
int max(std::vector<int> &v){
	int min=v[0];
	for(int i=0;i<v.size();i++){
		if(v[i]>min)min=v[i];
	}
	return min;
}
int min(std::vector<int> &v){
	int min=v[0];
	for(int i=0;i<v.size();i++){
		if(v[i]<min)min=v[i];
	}
	return min;
}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	std::vector<int> v2(n);
	for(int i=0;i<n;i++){
		std::vector<int> v(m);
		for(int j=0;j<m;j++){
			cin>>v[j];
		}
		v2[i]=min(v);
	}
	cout<<max(v2);
	return 0;
}