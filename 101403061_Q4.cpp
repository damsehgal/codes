/*
	101403061
	Dhruv Sehgal
	Coe3
	Q3
*/
#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define inputN(i,a)					for(int i=0;i<a.size();i++) scanf("%d",&a[i])
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

void quicksort(int [10],int,int);
void MERGE(int [],int ,int ,int );
void part(int [],int,int );
void towers(int, char, char, char);

int main(int argc, char const *argv[])

{
  int x[20],size,i;
int arr[30];
int NumToH;

  printf("Enter size of the array: ");
  scanf("%d",&size);

  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
	scanf("%d",&x[i]);

  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
	printf(" %d",x[i]);

 printf("\n\t MERGE sorting method \n\n");
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 for(i=0; i<size; i++)
 {
   printf("Enter %d element : ",i+1);
   scanf("%d",&arr[i]);
 }
 part(arr,0,size-1);
 printf("\n\t MERGE sorted elements \n\n");
 for(i=0; i<size; i++)
 printf("%d ",arr[i]);
 
 printf("\n\t TOWERS OF HANOI \n\n");
 printf("Enter the number of disks : ");
	scanf("%d", &NumToH);
	printf("The sequence of moves involved in the Tower of Hanoi are :\n");
	towers(NumToH, 'A', 'C', 'B');
  return 0;
}


void quicksort(int x[10],int first,int last)
{
	int pivot,j,dummy,i;

	 if(first<last){
		 pivot=first;
		 i=first;
		 j=last;

		 while(i<j){
			 while(x[i]<=x[pivot]&&i<last)
				 i++;
			 while(x[j]>x[pivot])
				 j--;
			 if(i<j){
				 dummy=x[i];
				  x[i]=x[j];
				  x[j]=dummy;
			 }
		 }

		 dummy=x[pivot];
		 x[pivot]=x[j];
		 x[j]=dummy;
		 quicksort(x,first,j-1);
		 quicksort(x,j+1,last);

	}
}
void part(int arr[],int left,int right)
{
 int middle;
 if(left<right)
 {
   middle=(left+right)/2;
   part(arr,left,middle);
   part(arr,middle+1,right);
   MERGE(arr,left,middle,right);
 }
}


void MERGE(int arr[],int left,int middle,int right)
{
  int tmp[30];
  int i,j,k,m;
  j=left;
  m=middle+1;
  for(i=left; j<=middle && m<=right ; i++)
  {
	 if(arr[j]<=arr[m])
	 {
		 tmp[i]=arr[j];
		 j++;
	 }
	 else
	 {
		 tmp[i]=arr[m];
		 m++;
	 }
  }
  if(j>middle)
  {
	 for(k=m; k<=right; k++)
	 {
		 tmp[i]=arr[k];
		 i++;
	 }
  }
  else
  {
	 for(k=j; k<=middle; k++)
	 {
		tmp[i]=arr[k];
		i++;
	 }
  }
  for(k=left; k<=right; k++)
	 arr[k]=tmp[k];
}
void towers(int NumToH, char FromPeg, char toPeg, char AuxPeg)
{
	if (NumToH == 1)
	{
		printf("\n Move disk 1 from peg %c to peg %c", FromPeg, toPeg);
		return;
	}
	towers(NumToH - 1, FromPeg, AuxPeg, toPeg);
	printf("\n Move disk %d from peg %c to peg %c", NumToH, FromPeg, toPeg);
	towers(NumToH - 1, AuxPeg, toPeg, FromPeg);
}