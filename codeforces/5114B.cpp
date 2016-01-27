#include <bits/stdc++.h>
using namespace std;
struct point
{
	double x;
	double y;
};

bool form(double x0,double y0,double x1,double y1,double x2,double y2){
	if(x0==x1 && x1==x2)return true;
	if(y0==y1 && y1==y2)return true;
	if(y1==y2 || x1==x2){
		if(((y2-y1)/(y1-y0))==((x2-x1)/(x1-x0)))return true;
	}
	if(((y1-y0)/(y2-y1))==((x1-x0)/(x2-x1)))return true;
	return false;
}
int main(int argc, char const *argv[])
{
	double n;double x0,y0;
	cin>>n>>x0>>y0;
	std::vector<point> v(n);
	std::vector<bool> b(n);
	for (double i = 0; i < n; ++i)
	{
		cin>>v[i].x>>v[i].y;
		b[i]=false;
	}
	double count=0;
	for(double i=0;i<n;i++){
		if(!b[i]){
			for(double j=i+1;j<n;j++){
				if(!b[j]){
					if(form(x0,y0,v[i].x,v[i].y,v[j].x,v[j].y))
					b[j]=true;
				}
			}
			b[i]=true;
			count++;
		}

	}
	cout<<count;
	return 0;
}