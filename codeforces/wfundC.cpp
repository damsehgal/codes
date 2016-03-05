#include <bits/stdc++.h>
using namespace std;
struct point
{
	long long x;
	long long y;
	long long index;
};
bool compare1(const point& a,const point& b)
{
	if(a.x!=b.x)return a.x<b.x;
	else return a.y<b.y;
}
bool inLine(const point& a,const point& b ,const point &c){
	if(a.y==b.y && a.y==c.y){return true;}
	if(a.x==b.x && a.x==c.x){return true;}
	if((a.y!=b.y)&&(b.y!=c.y)){
	if(((a.x-b.x)/(a.y-b.y))==((b.x-c.x)/(b.y-c.y)))
		return true;
	}
	else{
		if(((a.y-b.y)/(a.x-b.x))==((b.y-c.y)/(b.x-c.x)))
			return true;
	}
	return false;
}
int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;
	std::vector<point> v(n);
	for(long long i=0;i<n;i++){
		point temp;
		cin>>temp.x>>temp.y;
		temp.index=i+1;
		v[i]=temp;
	}
	sort(v.begin(), v.end(),compare1);
	//for(long long i=0;i<v.size();i++)cout<<v[i].index;
	point p1=v[0];
	point p2=v[1];
	long long i=2;
	while(true)
	{	
		if(inLine(p1,p2,v[i]) )i++;
		if(i>v.size())break;
		else break;
	}
	cout<<v[i].index<<" "<<p1.index<<" "<<p2.index;
	return 0;
}