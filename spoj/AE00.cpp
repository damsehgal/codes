#include <iostream>
using namespace std;
long long int ANS(int x){
	if(x==1)return 1;
	long long int count=0;
	for(int i=2;(i*i)<=x;i++){
		for(int j=i;(i*j)<=x;j++){
			count++;
		}
	}
	return count+x;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	cout<<ANS(t);
	return 0;
}