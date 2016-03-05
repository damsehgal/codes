#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if((x1==x2 && x2==x3)||(y1==y2 && y2==y3))
	{
		cout<<1;return 0;
	}
	if(x1==x2){
		if(y1==y3 || y2==y3){
			cout<<2;
			
		}
		else {
			if(y3<min(y1,y2) || y3>max(y1,y2))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	if(x2==x3){
		if(y2==y1 || y3==y1){
			cout<<2;
			
		}
		else {
			if(y1<min(y3,y2) || y1>max(y3,y2))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	if(x1==x3){
		if(y1==y2 || y3==y2){
			cout<<2;
			
		}
		else {
			if(y2<min(y1,y3) || y2>max(y1,y3))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	if(y1==y2){
		if(x1==x3 || x2==x3){
			cout<<2;
			
		}
		else {
			if(x3<min(x1,x2) || x3>max(x1,x2))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	if(y2==y3){
		if(x2==x1 || x3==x1){
			cout<<2;
			
		}
		else {
			if(x1<min(x3,x2) || x1>max(x3,x2))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	if(y1==y3){
		if(x1==x2 || x3==x2){
			cout<<2;
			
		}
		else {
			if(x2<min(x3,x1) || x2>max(x3,x1))
				cout<<2;
			else cout<<3;
		}
		return 0;
	}
	else{
	cout<<3;}	
	return 0;
}