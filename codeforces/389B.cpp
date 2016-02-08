#include <bits/stdc++.h>
using namespace std;
struct XY{
	int x;
	int y;
};
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	stack<XY>myStack;
	bool a[n][n];
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char c;
			cin>>c;
			if(c=='.')
				a[i][j]=false;
			else 
			{
				a[i][j]=true;
				count++;
			}

		}
	}
	if(count%5!=0){cout<<"NO";return 0;}
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			if(a[i][j])
			//if(i>=1 && i<n-1 && j>=1 && j<n-1){
					{if(a[i-1][j] && a[i+1][j] && a[i][j-1] && a[i][j+1])
						{	
							XY temp;
							temp.x=i;
							temp.y=j;
							myStack.push(temp);
						}
					}
		}
	}
	while(!myStack.empty()){
		XY temp=myStack.top();
		int i=temp.x;
		int j=temp.y;
		if(!a[i][j])
		{	
			cout<<"NO";
			return 0;
		}
		else a[i][j]=false; 
		if(!a[i-1][j])
		{	
			cout<<"NO";
			return 0;
		}
		else a[i-1][j]=false;
		if(!a[i+1][j])
		{	
			cout<<"NO";
			return 0;
		}
		else a[i+1][j]=false;
		if(!a[i][j-1])
		{	
			cout<<"NO";
			return 0;
		}
		else a[i][j-1]=false;
		if(!a[i][j+1])
		{	
			cout<<"NO";
			return 0;
		}
		else a[i][j+1]=false;
		myStack.pop();
	}
	cout<<"YES";
	return 0;
}