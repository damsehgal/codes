#include<iostream>
using namespace std;

void displayArray(int a[],int n,int m){
	cout<<endl;
	for(int i=n;i<m;i++) cout<<a[i]<<"\t";
}

int partition(int a[],int start, int end){
	int i=start+1,j=end;
	while(true){
		while(a[i]<a[start] && i<j)
			i++;
		while(a[j]>a[start] && i<j)
			j--;
		swap(a[j],a[i]);
		if(i>=j) break;
		i++;
		j--;
	}
	swap(a[0],a[i]);
	return i;
}
void quickSort(int a[],int start, int end){
	if(start<end){
		int mid = partition(a,start,end);
		quickSort(a,start,mid);
		quickSort(a,mid+1,end);	
	}
}

int main(){
	int n, a[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
//	partition(a,0,n-1);
	quickSort(a,0,n-1);
	displayArray(a,0,n);
}