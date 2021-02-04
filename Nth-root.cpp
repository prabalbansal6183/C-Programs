#include<bits/stdc++.h>
using namespace std;
void root(int n,int k)
{
    double ep = .0000000000000000001;
    double low,high;
    if(n>=0&&n<=1)
    {
        low = n;
        high = 1;
    }
    else 
    {
        low = 1;
        high = n;
    }
    double guess = (low+high)/2;
    while(abs(pow(guess,k)-n)>=ep)
    {
        if(pow(guess,k)>n)
        {
            high = guess;
        }
        else
        {
            low = guess;
        }
        guess = (low+high)/2;
        
    }
    cout<<fixed<<setprecision(20)<<guess;
}
int main()
{
    int n,k;
    cin>>n>>k;
    root(n,k);
    return 0;
}