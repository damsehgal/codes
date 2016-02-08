#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	std::map<char, int> Map;
	std::vector<int> v;
	for(int i=0;i<a.length();i++){
		Map[a[i]]++;
	}
	for(int i=0;i<a.length();i++){
		if(Map[a[i]]!=0)
			v.push_back(Map[a[i]]);
	}
	sort(v.begin(), v.end());
	if(v.size()==6){
		cout<<30;
		return 0 ;
	}
	if(v.size()==5){
		if(v[0]==2)
		{
			cout<<7;
			return 0;
		}

	}
	if(v.size()==4){
		if(v[0]==2 && v[1]==2){
			cout<<5;
			return 0;
		}
		if(v[0]==3){
			cout<<4;
			return 0;
		}
	}
	if(v.size()==3){
		if(v[0]==2 && v[1]==2){
			cout<<8;
			return 0;
		}
		if(v[0]==3 && v[1]==2){
			cout<<3;
			return 0;
		}
		if(v[0]==4){
			cout<<3;
			return 0;
		}

	}
	if(v.size()==2){
		if(v[0]==3 && v[1]==3){
			cout<<2;
			return 0;
		}
		if(v[0]==4){
			cout<<2;
			return 0;
		}
		if(v[0]==5){
			cout<<1;
			return 0;
		}
	}
	return 0;
}