 #include<bits/stdc++.h>
 using namespace std;
 int bb(int arr[],int low,int high)
    {
        if(low>high)
            return 0;
            
        if(low==high)
            {
            //   flag = arr[low];
                return arr[low];
            }
        
        int mid = (low+high)/2;
        
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                return bb(arr,mid+2,high);
            }
            else
            {
                return bb(arr, low, mid);
            }
        }
        else
        {
            if(arr[mid]==arr[mid-1])
            {
                return bb(arr,mid+1,high);
            }
            else
            {
                return bb(arr,low,mid-1);
            }
        }
            
    }
    int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[n];
        }
       cout<< bb(arr,0,n-1);
       return 0;
    }