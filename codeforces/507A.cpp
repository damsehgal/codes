#include <bits/stdc++.h>
using namespace std;
int min(vector<int>&a){
	int min=1000,minI;
	for(int i=0;i<a.size();i++){
		if(min>a[i]){min=a[i];minI=i;}
	}
	return minI;
}
int main(int argc, char const *argv[])
{
	int n,k,sum1;;
	cin>>n>>k;
	std::vector<int> v(n);
	for (int i = 0; i < v.size(); ++i)
	{
		cin>>v[i];
		sum1+=v[i];
	}
	if(k<v[min(v)])cout<<"0";
	else if(sum1<=k){
		cout<<n<<"\n";
		for(int i=0;i<n-1;i++){
			cout<<i+1<<" ";
		}
		cout<<n;
	}
	else{
		stack<int>myStack;
		int sum=k;
		while(true){
			int lm;
			lm=min(v);
			//cout<<lm;
			if(v[lm]==1000){
					break;
				}
			else{
					sum-=v[lm];
					v[lm]=1000;
					
					if(sum<0)break;
					myStack.push(lm);	
				}

			}
		cout<<myStack.size()<<"\n";
		while(myStack.size()>=2){
			int a=myStack.top();
			myStack.pop();
			cout<<a<<" ";
		}
		cout<<myStack.top();

	}
	return 0;
}
	