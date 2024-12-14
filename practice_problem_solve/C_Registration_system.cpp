#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
    unordered_map<string,int> cnt;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
      if(!cnt[name]){
        cout<<"OK\n";
        cnt[name]=1;
      }else{
        cout<<name<<cnt[name]<<endl;
        cnt[name]++;
      }
    }
    return 0;
}