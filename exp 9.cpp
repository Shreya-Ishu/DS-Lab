#include <iostream>
 
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
} 
int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
