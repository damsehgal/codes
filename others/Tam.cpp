#include <bits/stdc++.h>
using namespace std;
bool search(std::vector<int> v,int x){
	for (int i = 0; i < v.size(); ++i)if(v[i]==x)return true;
	return false;
}
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	srand(time(NULL));
	for(int i=0;v.size()<90;i++){
		int a=(rand())%90+1;
		if(!search(v,a))v.push_back(a);
	}
	for(int i=0;i<90;i++)cout<<v[i]<<" ";
	return 0;
}