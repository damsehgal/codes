#include <bits/stdc++.h>
using namespace std;
int GCD(int x,int y){
	if(x==0)return y;
	else return GCD(y%x,x);
}
void ANS(int a,int b,int n){
	bool flag;
	while(true){
		n-=GCD(a,n);
		if(n==0){
			flag =true;
			break;
		}
		n-=GCD(b,n);
		if(n==0){
			flag =false;
			break;
		}
	}
	if(flag)cout<<0;
	else cout<<1;

}
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	ANS(a,b,c);
	return 0;
}