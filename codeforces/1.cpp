#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		bool flag=false;
		cin>>a>>b;
        if(a==0 || b==0)cout<<"First\n";
        else{
		//lm: 
		if(a>b){
			if((a-b)%2==0){
				flag=false;
			}
			else flag=true;
			// while(a>b){
			// 	a--;
			// 	if(flag)flag=false;
			// 	else flag=true;
			// }
			//goto lm;
		}
		else if(b>a){
			if((a-b)%2==0){
				flag=false;
			}
			else flag=true;
			//goto lm;
		}
		else{
			if(flag)cout<<"First\n";
			else cout<<"Second\n";
		}
        }
	}
	return 0;
}