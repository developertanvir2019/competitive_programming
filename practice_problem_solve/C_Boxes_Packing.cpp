#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        int sz;
        cin>>sz;
        freq[sz]++;
    }
    int maxcnt=0;
    for(auto &grp:freq){
       maxcnt=max(maxcnt,grp.second);
    }
    cout<<maxcnt<<'\n';
    return 0;
}