#include <iostream>
using namespace std;

int* insertValue (int* originalArray, int positionToInsertAt, int ValueToInsert, int sizeOfOriginalArray)
{
	int* newArray = new int[sizeOfOriginalArray + 1];
	for (int i=0; i<=sizeOfOriginalArray; ++i)
	{
		if (i < positionToInsertAt)  
		{
			 newArray[i] = originalArray[i];
		}
		if (i == positionToInsertAt)      {
			newArray[i] = ValueToInsert;
		}
		if (i > positionToInsertAt)  
		{
			newArray[i] = originalArray[i-1];
		}
	}
return newArray;
}
int* deleteValue (int* originalArray, int positionToInsertAt, int sizeOfOriginalArray)
{
	int* newArray = new int[sizeOfOriginalArray - 1];
	for (int i=0; i<=sizeOfOriginalArray; ++i)
	{
		if (i < positionToInsertAt)  
		{
			 newArray[i] = originalArray[i];
		}
	 
		if (i > positionToInsertAt)  
		{
			newArray[i-1] = originalArray[i];
		}
	}
return newArray;
}

int main()
{
	int x[5]={0, 1, 2, 3, 4};
	for (int y=0;y<5;y++)
		cout << x[y] << " ";
	int* z = deleteValue(x,3,1,5);

	for (int y=0;y<6;y++)
		cout << z[y] << " "; delete[] z;
	
	/*int size=10;
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"1 to fill \n 2 to delete \n 3 to print any other to quit";
	int t;
	cin>>t;

	while(true)
	{
		if(t==1)
		{
			int pos,value;
			cout<<"pos "<<" value \n";
			cin>>pos>>value;
			int* z=insertValue(x,pos,value,size++);
		}
		else if(t==2){
			{
				int pos,value;
				cout<<"pos\n";
				cin>>pos>>value;
				int* z=deleteValue(x,pos,size++);
			}
		}
		else if(t==3){
			for(int i=0;i<size;i++){
				cout<<z[i]<<"\n";
			}
		}
		else break;
		cin>>t;
	}*/
	return 0;

}