#include <iostream>
using namespace std;
int pos=0;
int size=2;
int *arr;
void insert(int *arr,int x){
	if(pos<size){*(arr+pos)=x;pos++;}
	else
	{
	/*	int b[2*size];
		for(int i=0;i<size;i++)
			b[i]=arr[i];
		b[pos]=x;
		size*=2;
		pos++;
		delete []arr;
		arr=b;
	*/
		int *temp=new int[size*2];
		int i;
		for( i=0;i<size;i++)
			*(temp+i)=*(arr+i);	
		*(temp+i)=x;
		size*=2;
		delete[] arr;
		arr=temp;

	}
	
}


int main(int argc, char const *argv[])
{
	int *arr=new int[2];
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		insert(arr,a);
	}
	for(int i=0;i<size;i++){
		cout<<*(arr+i);
	}
	return 0;
}