/* author : Akash@1996 */

#include<bits/stdc++.h>
using namespace std;

int prime(long long int p)
{
	for(long long int i=2;i<=p/2;++i)
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	return 1;
}

long long int prm(long long int p,long long int n)
{
	//int c=0;
	long long int temp=0;
	for(long long int i=p;i>=p/2-1;--i)
	{
		int pp=prime(i);
		if(pp)
		{
			if(i*temp<=n && temp!=0)
			{
				return i*temp;
			}
			else
			{
				temp=i;
			}

		}

	}
}

long long int solve(long long int n)
{	
	long long int p=pow(n,0.5)+pow(n,0.5)/2;
	return prm(p,n);
}

int main()
{
	int t;
	cin>>t;
	int T=1;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<"Case #"<<T<<": "<<solve(n)<<"\n";
		T++;
	}
	return 0;
}
