/* @author akash kumar  */

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


/*
 #include<bits/stdc++.h>

int main() {
        using namespace std;
        ios_base::sync_with_stdio(false), cin.tie(nullptr);

        int T; cin >> T;
        for (int case_num = 1; case_num <= T; case_num ++) {
                int N, K; cin >> N >> K;
                string S; cin >> S;
                int cur_score = 0;
                for (int i = 0; i < N/2; i++) {
                        cur_score += (S[i] != S[N-1-i]);
                }

                cout << "Case #" << case_num << ": " << abs(cur_score - K) << '\n';
        }

        return 0;
} */
