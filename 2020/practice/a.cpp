/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
  int n;
  	   int bg;
  	   cin>>n>>bg;
  	   int a[n]	;
  	   for(int i=0;i<n;++i)
  	   {
  	   	cin>>a[i];
  	   }
  	   int ans=0;
  	   int c=0;
  	   for(int i=0;i<n;++i)
  	   {
  	   	ans+=a[i];
  	   	if(ans<=bg)
  	   	{
  	   		c++;
  	   	}
  	   	else
  	   	{
  	   		break;
  	   	}
  	   }
  	   cout<<c;	
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
       cout<<"Case #"<<i<<": ";
       solve();
       cout<<"\n";
    }
	return 0;
}
