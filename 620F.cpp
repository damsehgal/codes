#include <bits/stdc++.h>
using namespace std;
int countB(int x){
	int xount=0;
	while(x>0){
		xount++;
		x/=2;
	}
	return xount;
}
int ans(int I,int J,std::vector<int>& v,int MaxB){
	int maxTillNow=0,current=0;
	
	if(J-I>=2){
	for (int i = I; i < J; ++i)
	{
		//cout<<v[i]<<" "<<current<<" \n";
		if((current^v[i])>=current){
			current^=v[i];
		}
		
		else current=v[i];
			//cout<<current<<" " <<v[i] <<" \n";	
		if(current>maxTillNow)maxTillNow=current;
		//if(maxTillNow==pow(2,MaxB)-1){cout<<"aalo";return maxTillNow;}

	}
	return maxTillNow;
	}
	else if(I==J)return v[I];
	else {
		return max(max(v[I],v[J]),v[I]^v[J]);
		// return(max((max(v[I],v[J])),) );
	}
}
int main(int argc, char const *argv[])
{
	// int sa=10^21312;
	// cout<<sa;
	int n,q;
	cin>>n>>q;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
		
	
	for(int i=0;i<q;i++){
		int in1,in2;
		cin>>in1>>in2;
		int Max=v[in1-1];
		for(int i=in1-1;i<in2-1;i++)if(Max>v[i])Max=v[i];
		int lm=countB(Max);
		cout<<ans(in1-1,in2-1,v,lm)<<"\n";
	}



	return 0;
}