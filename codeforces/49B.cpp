#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	long long sum=0;
	for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];}
	//sort(v.begin(), v.end());
	//bitch NO SORTING is ALLOWED
	if((v[n-1]-v[0])==0)
		cout<<0<<" "<<0;
	else{
		while(v[i]<v[i+1])
		{
			if(v[n]-v[i]==0){
				//cout<<left
				break;
			}
			else{
				v[i]++;
				v[n-1]--;
				if(v[i+1]<v[i])swap(v[i],v[i+1]);
			}
		}
	}



	return 0;
}