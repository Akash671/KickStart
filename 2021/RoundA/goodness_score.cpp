/* @author   : akash kumar  */
/* @username : KickStart    */

#include<iostream>
using namespace std;

int solve(string s,int n,int k)
{
    /* logic here  A B C D A A*/
    int gd=0;
    for(int i=0;i<n/2;++i)
    {
        if(s[i]!=s[n-(i+1)])
        {
            gd++;
        }
    }
   return abs(gd-k);
}

int main()
{

    int t;
    cin>>t;
    for(int T=1;T<=t;T++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout<<"Case #"<<T<<": "<<solve(s,n,k)<<endl;
    }
}

