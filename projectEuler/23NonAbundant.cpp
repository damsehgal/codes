//sum of all those numbers which cant be written in  this form
//lets assume a>b
//and s=a+b;
//for all ,add till sum<
//49052630 non equal ,we need to find v[i]*2 
//new sum 244719450
//			4179871
#include<iostream>
#include<vector>
using namespace std;
int  sumCount(int x)
{int i,sum=1;
	for( i=2;(i*i)<x;i++){
		if(x%i==0)sum+=i;
		if((x%(x/i))==0)sum+=(x/i);

	}
	if(i*i==x)sum+=i;
	return sum;
}
std::vector<int> v;
int check(int x){
	for(int i=0,j=v.size()-1;i<j;){
		if(x==v[i]+v[j])return 0;
		else if(x>v[i]+v[j])i++;
		else j--;
	}
	return x;
}

int main(){
	int sum=0;
	for(int i=2;i<28123;i++){
		if (sumCount(i)>i)
		{
			/* code */
			v.push_back(i);v.push_back(i);
			//cout<<v[i];
		}
	}
//	for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
	for(int i=0;i<28123;i++){
		//if(!(check(i))){cout<<i<<" ";sum+=i;}
		if(check(i)!=0){cout<<i<<" ";sum+=check(i);}
	}
		//if(check(24)==0)cout<<"yes";
	cout<<sum;
}