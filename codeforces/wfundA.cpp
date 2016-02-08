#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		v.push_back(1);
		while(v[v.size()-1]==v[v.size()-2]){
			v[v.size()-2]++;
			v.pop_back();
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}