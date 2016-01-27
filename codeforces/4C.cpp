#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	string s;
	map<string,int> a;
	while(t--){
		cin>>s;
		if(a[s]){
			cout<<s<<a[s]<<endl;
			a[s]++;
		}
		else{
			cout<<"OK"<<endl;
			a[s]=1;
		}
	}
	return 0;
}
