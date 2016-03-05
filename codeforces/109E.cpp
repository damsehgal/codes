#include <bits/stdc++.h>
using namespace std;

int F(int x){
	int count=0;
	while(x>0){
		if((x%10)==4||(x%10)==7)count++;
		x/=10;
	}
	//cout<<count<<" ";
	return count;
}
bool check(int x,int y,int l){
	for(int i=0;i<l;i++){
		if(F(x+i)!=F(y+i)){//cout<<F(x+i)<<" ";
		return false;}
	}return true;
}
int main(int argc, char const *argv[])
{
	int x,l;
	cin>>x>>l;
	int i=x+1;
	while(!check(x,i,l)){
		i++;
	}
	cout<<i;
	return 0;
}