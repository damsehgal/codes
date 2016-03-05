#include  <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;bool flag=false;
	cin>>n>>k;
	vector<int> v[n];
	int count[n];
	for(int i=0;i<n;i++)count[i]=0;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		for(int j=0;j<t;j++){
			int lm;
			cin>>lm;
			if(lm<k)count[i]++;
			v[i].push_back(lm);
		}

	}int c1=0;
	std::vector<int> va;
	for(int j=0;j<n;j++){
		if(count[j]>0){
			c1++;
			va.push_back(j);
			flag=true;
		}
	}
	if(flag){
		cout<<c1<<"\n";
		for(int i=0;i<va.size()-1;i++){
			cout<<va[i]+1<<" ";
		}
		cout<<va[va.size()-1]+1;
	}
	else cout<<"0\n";
	return 0;
}
	