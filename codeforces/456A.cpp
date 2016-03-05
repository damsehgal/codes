#include <bits/stdc++.h>
using namespace std;

struct abc
	{
		int price;
		int qty;
		
	};
bool compare(const abc &a,const abc &b){
	return a.price<b.price;
}
int main(int argc, char const *argv[])
{	
	int n;
	bool flag=true;
	cin>>n;
	std::vector<abc> v1(n);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i].price>>v1[i].qty;
	}
	sort(v1.begin(), v1.end(),compare);
	int mp=v1[0].qty;
	for(int i=1;i<n;i++){
		if(mp>v1[i].qty){flag=false;break;}
		mp=v1[i].qty;
	}
	if(!flag)cout<<"Happy Alex";
	else cout<<"Poor Alex";
	return 0;
}

	