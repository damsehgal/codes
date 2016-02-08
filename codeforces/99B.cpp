#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	if(t==1){
		cout<<"Exemplary pages.";
		return 0;
	}
	std::vector<int> v(t),res;
	int sum=0;
	for (int i = 0; i < t; ++i)
	{
		cin>>v[i];
		sum+=v[i];
	}
	float avg=sum/float(t);
	if(ceil(avg)!=floor(avg)){
		cout<<"Unrecoverable configuration.";
		return 0;
	}
	for(int i=0;i<t;i++){
		if(avg-v[i]!=0)
			res.push_back(i);
	}
	if(res.size()==0){
		cout<<"Exemplary pages.";
		return 0;
	}
	if(res.size()!=2){
		cout<<"Unrecoverable configuration.";
		return 0;
	}	
	else{//20 ml. from cup # 4 to cup #1.
		 //20 ml. from cup #4 to cup #1.		
		if(v[res[0]]>v[res[1]])
			cout<<(v[res[0]]-v[res[1]])/2<<" ml. from cup #"<<res[1]+1<<" to cup #"<<res[0]+1<<".";

		else cout<<(v[res[1]]-v[res[0]])/2<<" ml. from cup #"<<res[0]+1<<" to cup #"<<res[1]+1<<".";
	}
	return 0;
}