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
        int pair=0;
        for(int i=1;i<=n;i++){
            if(n-i<n-1){
                pair++;
            }
        }
        cout<<pair<<endl;
    }
    return 0;
}