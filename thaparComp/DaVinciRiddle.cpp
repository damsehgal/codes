/*Problem Statement

Da Vinci's loves solving riddles. He is on his journey to the other world for finding the Book of Leaves. His friend Zo, who is accompaning him on his journey is bored and asks Da Vinci if he could help in some way. To keep Zo busy, he gives Zo a list of positive numbers(integers) and asks him to find the smallest number that could not formed by sum of numbers of any subarray(need not be contiguous) of the given list. As Zo is weak at riddles, he turn to you for help. The list contains n integers. You have to answer the riddle(give the number Da Vinci is looking for). 
*/
/*find the smallest number that could not formed by sum of numbers of any subarray*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findSmallest(int arr[], int n)
{
   int res = 1;
   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];
 
   return res;
}   


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){for(int j=i+1;j<n;j++){if(a[i]>a[j]){a[i]^=a[j];a[j]^=a[i];a[i]^=a[j];}}}
    cout<<findSmallest(a,n);
    return 0;
}

