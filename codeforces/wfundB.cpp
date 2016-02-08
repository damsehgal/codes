#include <bits/stdc++.h>
using namespace std;
int maxI(std::vector<int>& v){
	int maxcount=0;
	int alpha;
	for(int i=0;i<v.size();i++){
		int count=0;
		for (int j = 1; j <=v.size() ; ++j)
		{
			if(v[j-1]==i+1)
				count++;
			if(count>1)
				{
					return i+1;
				}
		}

	}
	return -1;

}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	std::vector<int> v2;
	/*f(t<=2){
		if(t==1)
			{cout<<1;
			return 0;}
		if(t==2)
		{
			cout<<"2 1";
			return 0;
		}
	}*/
	for(int i=0;i<t;i++){
		std::vector<int> v(t);
		for(int j=0;j<t;j++){
			cin>>v[j];
			
		}
		int lm=maxI(v);
			v2.push_back(lm);
			//cout<<"\n lm="<<lm;	
	}
	bool flag=true;
	for(int i=0;i<v2.size();i++){
		if(v2[i]==-1 && flag){
			cout<<v2.size()<<" ";
			flag =false;
		}
		else if(v2[i]==-1 && !flag){
			cout<<v2.size()-1<<" ";	
		}
		else cout<<v2[i]<<" ";
	}
	return 0;
}