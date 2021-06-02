/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

int solve(vector<int> array) 
{
   int maxLen = 0;
       for(int i = 0; i < array.size() - 1;) {
        int j = i;
        int common_difference = array[i+1] - array[i];
        while(j < array.size() - 1 && (array[j + 1] - array[j] == common_difference))
             j++;
        int max_j = j;
        maxLen = max(maxLen, max_j - i + 1);
        i = max(i + 1, j);
     }
     return maxLen;
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
       int n;
       cin>>n;
       vector<int>array(n);
       for(int i=0;i<n;++i)
       {
       	cin>>array[i];
       }
       cout<<"Case #"<<i<<": "<<solve(array);
       cout<<"\n";
    }
	return 0;
}
