#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> list;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
        list.push_back(s);
        }

            int sz=0;
            int cnt=0;
        for(int i=0;i<n;i++){
           sz+=list[i].size();
           if(sz<=m){
            cnt++;
           }
        }
        cout<<cnt<<"\n";
        
    }
    return 0;
}