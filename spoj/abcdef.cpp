#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> b,c;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				c.push_back(a[i]*a[j]+a[k]);
				if(a[i]!=0)
					b.push_back(a[i]*(a[j]+a[k]));
			}
		}
	}
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	int count = 0;
	for(int i=0;i<b.size();i++){
		for(int j=0;j<c.size();j++){
			if(b[i]==c[j]) count++;
		}
	}
	cout<<count;
	return 0;
}