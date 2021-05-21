/* author              :    Akash kumar
   kick start username :    Akash@1996*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;++t)
    {
	int n,bg;
	cin>>n>>bg;
	int a[n];
	for(int i=0;i<n;++i)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	int s=0;
	int c=0;
	for(int i=0;i<n;++i)
	{
	    s+=a[i];
	    if(s>bg)
	    {
		break;
	    }
	    else
	    {
		c+=1;
	    }
	}
	cout<<"Case #"<<t<<": "<<c<<endl;
    }
    return 0;
}
