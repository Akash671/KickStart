/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

ll solve(ll G)
{
   	ll ans=1;
  	ll tmp=0;
   	  for(ll i=1;i<=G/2+1;++i)
   	  {
   		for(ll j=i;j<G;++j)
   		{
   			//tmp+=j;
   			if(tmp==G)
   			{
   				ans++;
   				tmp=0;
   				i=i*2;
   				break;
   			}
   			else if(tmp>G)
   			{
   				tmp=0;
   				//i++;
   				break;
   			}
   			else
   			{
   			    tmp+=j;	
   			    //i++;
   			}
   		}
   	}
   	return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int T=1;
    while(t--) 
    {
    	ll G;
    	cin>>G;
    	cout<<"Case #"<<T<<": "<<solve(G)<<"\n";
    	T++;
    }
	return 0;
}
