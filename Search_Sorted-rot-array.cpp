#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int h,int key)
{
    if(l>h)
        return -1;

    int mid = (l+h)/2;
    if(key == arr[mid])
        return mid;

    if(arr[mid]<key)
        return binarySearch(arr,mid+1,h,key);

    return binarySearch(arr,l,mid-1,key);
}
int find_pivot(int arr[],int l,int h)
{
    if(l>h)
        return -1;
    if(l==h)
        return arr[l];

    int mid = (l+h)/2;

    if(mid<h &&arr[mid]>arr[mid+1])
            return mid;

    if(mid>l && arr[mid]<arr[mid-1])
        return mid-1;

    if(arr[l] >= arr[mid])
            return find_pivot(arr,l,mid-1);

    return find_pivot(arr,mid+1,h);
}
int main()
{
    int n;
        cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key,s=0;
    cin>>key;
    int p = find_pivot(arr,0,n-1);

    if (p == -1) 
        return binarySearch(arr, 0, n - 1, key);

    if(arr[p] == key)
        s = p;
    else{

    if(arr[0]<=key)
         s = binarySearch(arr, 0, p-1, key);

    s= binarySearch(arr, p+1, n - 1, key);}

    cout<<s<<endl;
    
}