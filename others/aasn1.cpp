#include <bits/stdc++.h>
using namespace std;
int max(std::vector<int>& v){
	int  max1=0,max2=0;
	int i=0;
	while(i<v.size()){
		if(v[i]>0)break;
		else i++;
	}
	for(;i<v.size();i++){
		max1+=v[i];
		if(max1<0)max1=0;
		if(max2<max1)max2=max1;
	}
	if(max2==0)return-1;
	return max2;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n),q;
	for(int i=0;i<n;i++)cin>>v[i];
	for(int j=0;j<n-1;j++)q.push_back(v[j+1]-v[j]);
	cout<<max(q);
	return 0;
}