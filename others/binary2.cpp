#include <bits/stdc++.h>
using namespace std;
int bin(int arr[],int low,int high,int x){
	int mid=low+(high-low)/2;
	if(arr[mid]==x)return mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]==x)return mid;
		else if(arr[mid]<x)low=mid+1;
		else high=mid-1;
		//cout<<low<<" "<<mid<<" "<<	high<<" ";//to debug the code uncomment this line
	}return -1;//if not found
}
int bin2(int a[],int low,int high,int x){
	if(low>high)return -1;
	int mid=low+(high-low)/2;
	if(a[mid]==x)return mid;
	if(a[mid]<x)return bin(a,mid+1,high,x);
	else return bin(a,low,mid-1,x);
}
int main(int argc, char const *argv[])
{	
	int n;
	cout<<"enter length of array\n";
	cin>>n;
	int arr[n],length=n;
	n--;
 cout<<"enter numbers \n";
	while(n>=0){
		cin>>arr[n];n--;
		cout<<"\n";
	}
	sort(arr,arr+length);
	cout<<"enter the number to be searched \n";
	int t;
	cin>>t;
	cout<<bin(arr,0,length,t)<<"is the index of your number\n";
	cout<<bin2(arr,0,length,t)<<"is the index of your number\n";
	
	return 0;
}