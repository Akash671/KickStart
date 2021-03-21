/* @author akash kumar  */

#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int OddEven(int n,int p)
{
    if(n%2==0 && p%2==0)
    {
        return 1;
    }
    else if(n%2 !=0 && p%2 !=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int boring(ll n)
{
    ll r;
    int p=0;
    int a[19];
    while(n>0)
    {
        r=n%10;
        a[p]=r;
        p++;
        n=n/10;
    }
    int b[19];
    //cout<<p<<endl;
    for(int i=0;i<p;++i)
    {
        b[i]=a[p-i-1];
    }
    //int P=1;
    int c=0;
    int k=0;
    for(int j=0;j<p;++j)
    {
        k++;
        if(OddEven(b[j],j+1))
        {
            c++;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int solve(ll L,ll R)
{
    int c=0;
    for(ll i=L;i<=R;++i)
    {
        if(boring(i))
        {
            c++;
        }
    }
    return c;
}


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        ll L,R;
        cin>>L>>R;
        cout<<"Case #"<<i<<": "<<solve(L,R)<<"\n";
    }
}
