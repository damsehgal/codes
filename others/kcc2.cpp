#include <bits/stdc++.h>
using namespace std;
struct RC
{
	int r;
	int c;
};
int aloo[100][100];
bool isROT(int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(aloo[i][j]==1)return false;
		}
		//cout<<aloo[i][0];
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{	int mount=-1;
		int a,b;
		cin>>a>>b;
		
		std::vector<RC> v;
		lmn:
		for(int i=0;i<a;i++){
			for (int j = 0; j <b; j++)
			{
				/* code */
				cin>>aloo[i][j];
				if(aloo[i][j]==2){
					RC anda;
					anda.r=i;
					anda.c=j;
					v.push_back(anda);	
				}
			}
		}
		if(v.size()==0)cout<<mount;
		else{
		
			if(!isROT(a,b)){
				//cout<<count;
					for(int i=0;i<v.size();i++){
						aloo[v[i].r+1][v[i].c]=2;
						aloo[v[i].r-1][v[i].c]=2;
						aloo[v[i].r][v[i].c+1]=2;
						aloo[v[i].r][v[i].c-1]=2;
					for(int i=0;i<a;i++){
						for (int j = 0; j < b; j++)
						{
							cout<<aloo[i][j]<<" ";
						}
						cout<<"\n";
					}
					cout<<"\n";	

				}
					v.clear();
				goto lmn;
			}
				else {
					if(mount==-1)mount=1;
					else mount++;
					cout<<mount;
				}
				
			
					
	
		
		}
	}	
	return 0;
}