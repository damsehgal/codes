/*
	101403061
	Dhruv Sehgal
	Coe3
	Q1
*/

#include <bits/stdc++.h>
using namespace std;
void swap(int &a ,int &b){
	//FUNCTION TO SWAP 2 INTEGERS
	int temp=a;
	a=b;
	b=temp;
}
int binary(std::vector<int> v,int low,int high,int x){
	//RECURSIVE BINARY SEARCH
	int mid=low+(high-low)/2;
	if(v[mid]==x)return mid;
	if(low >high)return -1;
	else if(v[mid]<x)return(binary(v,mid+1,high,x));
	else return(binary(v,low,mid-1,x));
}
int LINEAR(std::vector<int>& v,int x){
	//LINEAR SEARCH ->RETURNS INDEX OF FIRST OCCURENCE OF A NUMBER UNCOMMENT
	//LINES 27-30 TO RETURN INDEX OF LAST OCCUREBCE
	/*for(int index=v.size()-1;index>=0;index--){
		if(v[index]==x)return index;
	}
	return -1;*/
	for(int index=0;index<v.size();index++){
		if(v[index]==x)return index;
	}
	return -1;
}
void buuble(std::vector<int>& a){
	//FUNCTION TO PERFORM BUBBLE SORT IN INCREASING ORDDER
	//AND TO DISPLAY NUMBER OF SWAPS AND NUMBER OF COMPARISONS
	int size=a.size();
	int countSwaps=0,comparisons=0;
	for(int i=0;i<size-1;i++){
		bool flag=false;
		for(int j=0;j<size-1;j++){
			comparisons++;
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				flag=true;
				countSwaps++;
			}
		}
		if(!flag)break;
	}
	cout<<"No of Swaps="<<countSwaps<<"No of comparisons="<<comparisons<<"\n";
}

int NoOfComparisonsSelection=0;
int MIN(std::vector<int>& v,int low){
	//RETURNS INDEX OF MINIMUNM NUMBER IN ARRAY.
	int min=low;
	for (int i = low+1; i < v.size(); ++i){
		NoOfComparisonsSelection++;
		if(v[i]<v[min]){
			min=i;
		}
	}
	
	return min;
}
void selection(std::vector<int>& a){
	//FUNCTION TO PERFORM SELECTION SORT IN INCREASING ORDDER
	//AND TO DISPLAY NUMBER OF SWAPS AND NUMBER OF COMPARISONS
	int NoOfSwaps=0;
	for (int i = 0; i < a.size()-1; ++i)
	{
		swap(a[MIN(a,i)],a[i]);
		NoOfSwaps++;
	}
	cout<<"NoOfSwaps= "<<NoOfSwaps;
	cout<<"NoOfComparisonsSelection= "<<NoOfComparisonsSelection<<"\n";
}
void insertion(std::vector<int>& v){
	//FUNCTION TO PERFORM INSERTION SORT IN INCREASING ORDDER
	//AND TO DISPLAY NUMBER OF SWAPS AND NUMBER OF COMPARISONS
	int NoOfSwaps=0,NoOfComparisons=0;
	for (int i = 0; i < v.size()-1; ++i)
	{
		int j=i+1;
		while(v[j]<v[j-1]){
			NoOfSwaps++;NoOfComparisons++;
			swap(v[j],v[j-1]);
			j--;
		}
	}
	cout<<"NoOfSwaps= "<<NoOfSwaps<<"NoOfComparisons= "<<NoOfComparisons<<"\n";
}
void shellSort(std::vector<int>& V){
	//FUNCTION TO PERFORM SHELL SORT IN INCREASING ORDDER
	//AND TO DISPLAY NUMBER OF SWAPS AND NUMBER OF COMPARISONS
	int h, i, j, t,n=V.size();
	for (h = n; h /= 2;) {
		for (i = h; i < n; i++) {
			t = V[i];
			for (j = i; j >= h && t < V[j - h]; j -= h) {
				V[j] = V[j - h];
			}
			V[j] = t;
		}
	}
}
void print(std::vector<int>& v){
	//FUNCTION TO PRINT ALL ELEMENTS OF A VECTOR
	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<"\n";
	}
}
int main(int argc, char const *argv[])
{	
	std::vector<int> v;
	cout<<"insert elements press -1 to exit\n";
	int t;
	cin>>t;
	while(t!=-1){
		
		v.push_back(t);
		cin>>t;
	}
	int ans;
	bool flag=false;
	do{
		cout<<"\n PRESS 1 FOR INSERTION SORT\n PRESS 2 FOR SELECTION SORT \n"
		<<" PRESS 3 FOR BUBBLE SORT\n PRESS 4 FOR SHELL SORT \n PRESS 5 FOR" 
		<<" LINEAR SEARCH \n PRESS 6 FOR BINARY SEARCH\n PRESS 0 TO EXIT\n";

		
		cin>>ans;
		if(ans==1){
			insertion(v);
			flag=true;
			print(v);
		}
		else if(ans==2)
		{
			selection(v);
			flag=true;
			print(v);
		}
		else if(ans==3){
			buuble(v);
			flag=true;
			print(v);
		} 
		else if(ans==4){
			shellSort(v);
			flag=true;
			print(v);
		}
		else if(ans==5){
			cout<<"\n Enter the element to be searched\n";
			int NoToBeSearched;
			cin>>NoToBeSearched;
			int INDEX=LINEAR(v,NoToBeSearched);
			string th;
			if(INDEX%10==0)th="st";
			else if(INDEX%10==1	)th="nd";
			else if(INDEX%10==2)th="rd";
			else th="th";
			if(INDEX!=-1)

				cout<<"\nFound element at "<<INDEX+1<<th<<" INDEX\n";
			else 
				cout<<"\nelement Not Found\n";
		}
		else if(ans==6){
			if(!flag)
				{
					cout<<"SORT ARRAY BEFORE BINARY SEARCH\n";
					continue;
				}
			cout<<"\n Enter the element to be searched\n";
			int NoToBeSearched;
			cin>>NoToBeSearched;
			int INDEX=binary(v,0,v.size(),NoToBeSearched);
			string th;
			if(INDEX%10==0)th="st";
			else if(INDEX%10==1)th="nd";
			else if(INDEX%10==2)th="rd";
			else th="th";
			if(INDEX!=-1)
				cout<<"\nFound element at "<<INDEX+1<<th<<" INDEX\n";
			else 
				cout<<"\nelement Not Found\n";
		}
	}while(ans!=0);
	
	
	return 0;
}
