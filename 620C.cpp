#include <bits/stdc++.h>
using namespace std;
// int 
// std::vector<int> DIVIDE(std::vector<int>& v){
// 	if(v.size()==1)return(v);
// 	std::vector<int> l(v.size()/2),r(v.size()-v.size()/2);
// 	for (int i = 0; i < l.size(); ++i)
// 	{
// 		l[i]=v[i];

// 	}
// 	for (int i = 0; i < r.size(); ++i)
// 	{
// 		r[i]=v[l.size()+i];}
// 	DIVIDE(l);
// 	DIVIDE(r);	
// 	CONQUER(l,r,v);
// }






int main (int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	std::map<int,int> MyMap;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d",&v[i]);
		MyMap[v[i]]++;
	}
	

	int count1=0;
	int x=max_element(MyMap.begin(), MyMap.end());
	for(int i=0;i<v.size();i++){
		if(v[i]==x)
			count++;

	}
	cout<<count<<"\n";
	std::vector<int> v2;
	// for(int i=0;i<v.size();i++){
	// 	if()


	// }
	return 0;
}