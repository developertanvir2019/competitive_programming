#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
    vector<int>nm(n);
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>nm[i];
        total+=nm[i];
    }
    if(total%2==0){
        cout<<total<<endl;
        return 0;
    }
    sort(nm.begin(),nm.end());
    for(int i=0;i<n;i++){
        ll sub=total-nm[i];
        if(sub%2==0){
            cout<<sub<<endl;
            return 0;
        }
    }
    return 0;
}