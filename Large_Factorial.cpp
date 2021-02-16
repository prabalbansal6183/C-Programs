#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int mult(int x,int res[],int res_size)
{
    int carry = 0;
    for(int i=0;i<res_size;i++)
    {
        int p = res[i]*x+carry;
        res[i] = p%10;
        carry = p/10;
    }
    while(carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
string solve(int A) {
    int res[MAX];
    string s ="";
    res[0] = 1;
    int res_size = 1;
    for(int x = 2;x<=A;x++)
        res_size = mult(x,res,res_size);

        
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
        //s+=to_string(res[i]);
    }
    cout<<"\n";
    return s;
}
int main()
{
    cout<<solve(100);
    return 0;
}