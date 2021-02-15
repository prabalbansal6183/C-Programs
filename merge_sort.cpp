#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int p,int mid,int q)
{
    // creating a temprorary array;
    int temp[q-p+1];
    int i = p, j = mid+1,k = 0;
    while(i<=mid&&j<=q)
    {
        if(arr[i]<=arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
        
    }
    while(i<=mid)
    {
         temp[k] = arr[i];
            k++;
            i++;
    }
    while(j<=q)
    {
         temp[k] = arr[j];
            k++;
            j++;
    }
    for(i = p; i <= q; i += 1) {
		arr[i] = temp[i - p];
	}
}
void merge_sort(int arr[],int p,int q)
{
    if(p<q)
    {
        int mid = (p+q)/2;
        merge_sort(arr,p,mid);
        merge_sort(arr,mid+1,q);
        merge(arr,p,mid,q);
    }
    
}
int main()
{
    int arr[6] = {6,3,8,9,2,1};
    merge_sort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}