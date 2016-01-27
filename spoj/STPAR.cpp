#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t!=0){
		std::vector<int> v;
		for(int i=0;i<t;i++){
			int lm;
			cin>>lm;	
			v.push_back(lm);
		}
		//reverse(v.begin(), v.end());
		bool ans;
		stack<int>myStack; 
		int limit=1;
		for(int i=0;i<t;i++){
			if(!myStack.empty()){
				
				while(myStack.top()==limit){myStack.pop();limit++;
					if(myStack.empty())break;
				}
			}
			if(v[i]>limit)myStack.push(v[i]);
			else limit++;
			//cout<<limit<<" "<<v[i]<<"\n";	
		}int max=limit;
		while(!(myStack.empty()))
		{
			if(myStack.top()==(limit)){limit++;//	cout<<myStack.top()<<"   ";
			myStack.pop();}
			else {ans =false;goto deaf;}
		}
		ans=true;
		deaf: 
		if(ans)cout<<"yes\n";
		else cout<<"no\n";
		cin>>t;
	}
	return 0;
}