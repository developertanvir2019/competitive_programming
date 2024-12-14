#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
    set<pair<string,string>> lv;
    for(int i=0;i<n;i++){
        string l,c;
        cin>>l>>c;
        lv.insert({l,c});
    }
   cout<<lv.size()<<endl;
    

    return 0;
}