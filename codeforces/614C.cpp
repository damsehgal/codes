#include <bits/stdc++.h>
using namespace std;
static long double n,x1,y1;
long double abs2(long double a)
{
	if(a>0)return a;
	return -a;
}
long double dist(long double x,long double y)
{
	return (x1-x)*(x1-x)+(y1-y)*(y1-y);}

struct abc
{
	long double x;long double y;
	
};
bool compare(const abc&  a1,const abc&  b1){
	//(((x1-a1.x)*(x1-a1.x))+((y1-a1.y)*(y1-a1.y)))<((x1-b1.x)*(x1-b1.x))+((y1-b1.y)*(y1-b1.y)));
	return dist(a1.x,a1.y)<dist(b1.x,b1.y);
}

int main(int argc, char const *argv[])
{
	cin>>n>>x1>>y1;
	std::vector<abc> de(n);
	for(long double i=0;i<n;i++){
		cin>>de[i].x>>de[i].y;
	}
	sort(de.begin(), de.end(),compare);
	long double ans=3.141592654*abs2(dist(de[n-1].x,de[n-1].y)-dist(de[0].x,de[0].y));
	cout<<ans;
	return 0;
}