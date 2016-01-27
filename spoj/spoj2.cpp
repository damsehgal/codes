#include<iostream>
using namespace std;
bool check(int i){
	if(i<=2)return false;
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}



int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int l,m;
		cin>>l>>m;
		for(int i=l;i<=m;i++){
			if(check(i))cout<<i<<endl;
		}
	}
	return 0;
}