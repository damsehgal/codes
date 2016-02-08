#include <bits/stdc++.h>
using namespace std;

std::vector<int> ans;
int badasum=0;

int f(int i,std::vector<int>& weights,vector<int>& mapped,std::vector<int> cnt){
	if(ans[i]!=-1) {badasum+=ans[i];return ans[i];}
	//if(i<1)return 1;
	if(mapped.size()==1&&i>=mapped[0]){cout<<"hhk";badasum+=1;return 1;}
	if(i>=mapped[0] && (mapped.size()>1 && i<mapped[1])){
		if(i%mapped[0]==0){badasum+=1;return 1;}
		return 0;
	}
	if(i<mapped[0]) return 0;
	int sm=0;
	for(int j = 0;j<mapped.size();j++){
		sm += cnt[j]*f(i-mapped[j],weights,mapped,cnt)%1000000007;
		badasum+=sm%1000000007;
		cout<<sm<<" ";
	}
	ans[i]=sm%1000000007;
	return ans[i];
}

int main()
{
	int n,x,MOD=1000000007;
	cin>>n>>x;
	std::vector<int> v(n),c,cnt;
	set<int> b;
	for(int i = 0; i < n; ++i){
		cin>>v[i];
		b.insert(v[i]);	
	}
	std::copy(b.begin(),b.end(), std::back_inserter(c));
	sort(v.begin(), v.end());
	int cunt=1;
	int k=0;
	cnt.resize(b.size());
	for(int i=0;i<b.size();i++) cnt[i]=0;
	for(int i=0;i<b.size();i++){
		
		while(v[k]==c[i])
			{
				cnt[i]++;
				k++;
			}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" "<<c[i]<<" "<<cnt[i]<<"\n";
	}
	ans.resize(x+1);
	for(int i=1;i<=x;i++) ans[i]=-1;
	long long sum=0;
	int a=f(x,v,c,cnt);
	cout<<badasum;
	return 0;
}