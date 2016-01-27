#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,l;bool flag=false;
	cin>>t;l=t;
	std::vector<int> v2;
	for(int j=0;j<t;j++){
		vector<int> v(t);
		for(int i=0;i<t;i++){
			cin>>v[i];
			if(v[i]==1 ||v[i]==3)flag=true;
		}
		
		if(!flag)v2.push_back(j+1);
		flag=false; 
	}
	cout<<v2.size()<<"\n";
	if(v2.size()>0){
	for(int i=0;i<v2.size()-1;i++)cout<<v2[i]<<" ";
	cout<<v2[v2.size()-1];	
	}
	return 0;
}