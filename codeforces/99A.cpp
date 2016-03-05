#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	string a;
	cin>>a;
	int i;
	for( i=0;i<a.length();i++){
		if(a[i]=='.')break;
	}
	if(a[i-1]!='9'){
		if(a[i+1]<'5' || a[i+1]=='0'){
			for(int j=0;j<i;j++)cout<<a[j];
		}
		else {
			a[i-1]+=1;
			for(int j=0;j<i;j++)cout<<a[j];
		}
	}
	else{
		cout<<"GOTO Vasilisa.";
	}
	return 0;
}