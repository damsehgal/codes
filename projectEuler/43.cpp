#include<iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
     bool IsPandigital(long long int n)//not works in case of 0-9;
    {
        int digits = 0; int count = 0; int tmp;

        for (; n > 0; n /= 10, ++count)
        {
            if ((tmp = digits) == (digits |= 1 << (n - ((n / 10) * 10) - 1)))
                return false;
        }

        return digits == (1 << count) - 1;
    }
    int  digitMaker(int a1,int a2,int a3){
    	return ((a1*100)+(a2*10)+a3);
    }
    int p[7]={2,3,5,7,11,13,17};
bool check(long long int x){
	int arr[10];int b=x;
	for(long long int i=10,a=0;b!=0;i*=10,a++){
		arr[a]=b%10;b/=10;
	}//bool flag=true;
	for(int i=0;i<7;i++){//2 3 4->8 9 10
		if(digitMaker(arr[i+1],arr[i+2],arr[i+3])%p[i]==false)return false;
	}return true;
}
long long int NEXT(long long int x){
	int a=11;long long int b=x,dummyI,dummyB;int dummy;
	vector<int> v;
	stack<int>mystack; 
	for(long long int i=0;b!=0;i++){
		if((b%10)<a){
			a=b%10;
			v.push_back(a);
		}
		else{
			dummy=b%10;
			dummyI=i;
			dummyB=b/10;

			break;
		}

		b/=10;
		
	}
	int minInS=-1,pos;
	reverse(v.begin(),v.end());
	for (int i=0;i<v.size(); ++i)
	{
		if(v[i]>dummy){minInS=v[i];pos=i;break;}//we need to find smallest nuber greater than 3
	}
	
	//cout<<"dummy="<<dummy;	cout<<"pos="<<pos<<" "<<"minInS="<<minInS<<" ";
	v[pos]=dummy;//cout<<v[pos];
	long long int ret1=0;
		reverse(v.begin(),v.end());
	long long int j=1;
	for (long long int i=0; i<v.size(); ++i,j*=10)
	{
			ret1+=j*v[i];//cout<<ret1<<endl;
	}
	v.erase(v.begin(), v.end());
	long long int ret=ret1+minInS*j+10*dummyB*j;
	return ret;

}

int main(int argc, char const *argv[])
{
	/*for(long long int i=1023456789;i<=9876543210;i++){
		if(IsPandigital(i) /*&& check(i)
	int myints[10]={1,0,2,3,4,5,6,7,8,9};long long int a;
	while(next_permutation(myints,myints+10) &&  a<=9876543210){
		 a=(myints[0]*1000000000) +(myints[1]*100000000)+(myints[2]*10000000)+(myints[3]*1000000)+(myints[4]*100000)+(myints[5]*10000)+(myints[6]*1000)+(myints[7]*100)+(myints[8]*10)+(myints[9]*1);
		if(check(a))cout<<a;if(a==9876543210)break;
	}*/
	/*long long int sum=0, i=1023456789 ,lma=i;
	for(;lma!=9876543210;)
	{
		lma=NEXT(i);
		
		sum+=lma;cout<<lma<<"\n";
	}*/
	int a=NEXT(1234);
	cout<<a;
	return 0;
}