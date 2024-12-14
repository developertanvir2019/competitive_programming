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
        vector<int>note(n);
        for(int i=0;i<n;i++){
            cin>>note[i];
        }
       
        bool ans=true;
        for(int i=0;i<n-1;i++){
            int interval=abs(note[i]-note[i+1]);
            if(interval !=5 && interval !=7){
                ans=false;
                break;
            }
        }
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}