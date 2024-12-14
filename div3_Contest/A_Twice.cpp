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
        int n;
        cin>>n;
        vector<int> a(n);
        unordered_map<int,int> fre;
        for(int i=0;i<n;i++){
            cin>>a[i];
            fre[a[i]]++;
        }
        int count=0;
       for(auto &item:fre){
        count+=item.second/2;
       }
       cout<<count<<endl;
    }
    return 0;
}