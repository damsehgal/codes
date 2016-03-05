#include <bits/stdc++.h>
using namespace std;
bool isLucky(int x){
	if(x==4||x==7)return true;
	return false;
}
bool isNearLucky(long long int x){
	int count=0;
	while(x>0){
		if(((x%10)==4)||((x%10)==7))
			count++;
		x/=10;
	}
	return isLucky(count);

}
int main(int argc, char const *argv[])
{
	long long int x;
	cin>>x;
	if(isNearLucky(x))cout<<"YES";
	else cout<<"NO";
	return 0;
}