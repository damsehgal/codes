#include <bits/stdc++.h>
using namespace std;
int min(int x,int y){
	if(x>y)return y;
	return x;
}
int min(int x,int y,int z,int t){
	return min(min(min(x,y),z),t);
}

int main(int argc, char const *argv[])
{
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	cout<<min(2*(d1+d2),2*(d1+d3),2*(d2+d3),d1+d2+d3);

	//else cout<<d1+d2+d3;
	return 0;
}