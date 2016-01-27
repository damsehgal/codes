#include <bits/stdc++.h>
using namespace std;
int cunt=0;
int CONQUER(std::vector<int>& v,int sum1){
	int sum=-100,maxsum=-100,sum2=-100,maxsum2=-100;//cout<<cunt++<<" ";
	for(int i=v.size()/2,j=i+1;i>=0 && j<v.size();i--,j++)
		{
			sum+=v[i];
			sum2+=v[j];
			if(sum>maxsum)
			{
				maxsum=sum;//cout<<maxsum<<" ;\n";
			}
			if(sum2>maxsum2)maxsum2=sum2;	
		}
		//cout<<maxsum2+maxsum<<" ;\n";
	return max(max(max(maxsum+maxsum2,maxsum),maxsum2),sum1);
}
int DIVIDE(std::vector<int>& v){
	//if (v.size()==2) return v[0]+v[1];
	if (v.size()==1) return v[0];
	std::vector<int> l(v.size()/2),r(v.size()-v.size()/2);
	for(int i=0;i<l.size();i++)l[i]=v[i];
	for(int i=0;i<r.size();i++)r[i]=v[l.size()+i];	
	
	return CONQUER(v,max(DIVIDE(l),DIVIDE(r)));

}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	cout<<DIVIDE(v);
	//for(int i=0;i<n;i++)cout<<v[i];	
	return 0;
}