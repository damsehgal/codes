#include <bits/stdc++.h>
using namespace std;
int Count(std::vector<int>& v,int i){
	
	int count=0;
		int el=v[i];
	for(int j=i;j<v.size();j++){
		//cout<<v[i]<<" "<<count<<"\n";
	
		if(v[j]==el){
			//cout<<count<<" "<<v[j]<<"\n";
			count++;
			//cout<<count<<" ";
			v[j]=0;

		}
		else {
			break;
		}
	}
	return count;

}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(), v.end());
	cout<<n<<"\n";
	//cout<<Count(v,4);
	for (int i = 0; i < v.size() && n>0; ++i)
	{
		
		if(v[i]!=0){
			n-=Count(v,i);
			if(n!=0)cout<<n<<"\n";
		}
	}
	return 0;
}