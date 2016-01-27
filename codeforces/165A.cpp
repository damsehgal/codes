#include <bits/stdc++.h>
using namespace std;
struct point
{
	int x;
	int y;
};
// bool compare(const point& a,const point& b){
// 	if(a.x!=b.x)return a.x<b.x;
// 	return a.y<b.y;
// }

bool isHc(std::vector<point>& v,int x,int y)
{	
	bool flag1=false,flag2=false;
	for(int i=0;i<v.size();i++){
		if(v[i].y==y){
			if(v[i].x<x)flag1=true;
			else if(v[i].x>x)flag2=true;
		
		}
		if(flag1 && flag2)return true;
	}
	return (flag1 && flag2);
}
bool isVc(std::vector<point>& v,int x,int y){
	bool flag1=false,flag2=false;
	for(int i=0;i<v.size();i++){
		if(v[i].x==x){
			if(v[i].y<y)flag1=true;
			else if(v[i].y>y)flag2=true;
		
		}
		if(flag1 && flag2)return true;
	}
	return (flag1 && flag2);
}
int main(int argc, char const *argv[])
{
	int n,count=0;
	cin>>n;
	std::vector<point> v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i].x>>v[i].y;
	for(int i=0;i<v.size();i++){
		if(isHc(v,v[i].x,v[i].y) && isVc(v,v[i].x,v[i].y))count++;
	}
	cout<<count;
	return 0;
}