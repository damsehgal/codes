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
				{
					if(a[i-1][j] && a[i+1][j] && a[i][j-1] && a[i][j+1])
					{	
						a[i][j]=false;
						a[i-1][j]=false;
						a[i+1][j]=false;
						a[i][j-1]=false;
						a[i][j+1]=false;
					}
				}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j])
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}