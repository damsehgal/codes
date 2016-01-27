#include <iostream>
using namespace std;
long long int ROOT(int a,int b,int c,int x1,int x2,int y1,int y2){
	int  count=0;
	if((x2-x1)>(y2-y1)){
		for(int i=x1;i<=x2;i++){
			float y=(float)((-c-(a*i))/b);
			if(y>=y1 && y<=y2)count++;
		}
		return count;
	}
	else{
		for(int i=y1;i<=y2;i++){
			float x=(float)((-c-(b*i))/a);
			if(x>=x1 && x<=x2)count++;
			//cout<<x<<" "<<i<<" ";
		}
		return count;
	}

}
int main(int argc, char const *argv[])
{
	int a,b,c,x1,x2,y1,y2;
	cin>>a>>b>>c>>x1>>x2>>y1>>y2;
	cout<<ROOT(a,b,c,x1,x2,y1,y2);
	return 0;
}