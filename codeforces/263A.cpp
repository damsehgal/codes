#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[5][5],x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				x=i;y=j;
			}
		}
	}
	if(x==0 ||x==4){
		if(y==0 ||y==4){
			cout<<"4";
		}
		else if(y==1||y==3)cout<<"3";
		else cout<<"2";
	}
	else if(x==1 || x==3){
		if(y==0||y==4){
			cout<<"3";
		}
		else if(y==1 || y==3){
			cout<<"2";
		}
		else {
			cout<<"1";
		}
	}
	else{
		if(y==0||y==4){
			cout<<"2";
		}
		else if(y==1 || y==3){
			cout<<"1";
		}
		else cout<<"0";	
	}
	return 0;
}