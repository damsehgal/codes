#include <bits/stdc++.h>
using namespace std;
long long int Count(std::vector<int>& a){
	long long int pro=1;
	for(int i=0;i<a.size();i++){
		
		if(a[i]==1){

			int j=i+1;
			if(j<a.size()-1){
				int pro2=1,cunt=0;
			while(a[j]==0 && j<a.size()-1){
					j++;
					cunt++;
				}
				if(a[j]==1)	
				pro2*=cunt+1;
				//cout<<i<<" "<<j<<" "<<pro2<<" \n";
				pro*=pro2;
			}

		}

	}
	return pro;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	std::vector<int> v(t);
	int sum=0;
	for(int i=0;i<v.size();i++){cin>>v[i];sum+=v[i];}
	if(sum==1 || sum==t)
		{
			cout<<1;
			return 0;
		}
		if(sum==0){cout<<0;return 0;}

	cout<<Count(v);	
}