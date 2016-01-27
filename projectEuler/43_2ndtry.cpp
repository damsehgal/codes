#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template <typename T>
void next_permutation(vector<T> &array) {
    // Find non-increasing suffix
    if (array.size() == 0)
        return ;
    typename vector<T>::iterator i = array.end() - 1;
    while (i > array.begin() && *(i - 1) >= *i)
        --i;
    if (i == array.begin())
        return;

    // Find successor to pivot
    typename vector<T>::iterator j = array.end() - 1;
    while (*j <= *(i - 1))
        --j;
    iter_swap(i - 1, j);

    // Reverse suffix
    reverse(i, array.end());
   // return;
}

long long int MAKER(vector<int>&v){
	reverse(v.begin(), v.end());
	long long int x=0;
	for(long long int i=0,j=1;i<v.size();i++,j*=10){
		x+=(j*v[i]);
	}
	//cout<<x;
	reverse(v.begin(), v.end());
	return x;
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
int main(int argc, char const *argv[])
{	static const int arr[] = {1,0,2,3,4,5,6,7,8,9};
	std::vector<int> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
	//vector<int> v;//v.push_back(1);v.push_back(4);v.push_back(0);v.push_back(3);
	long long int sum=0;
	while(true){int count=0;
		if(check(MAKER(v)))sum+=MAKER(v);
		next_permutation(v);
		for(int i=0;i<v.size();i++){
			if(v[i]==9-i)count++;
			else break;
			if(count==9)goto d;
		}
		
	}d:
	cout<<sum;
	return 0;
}