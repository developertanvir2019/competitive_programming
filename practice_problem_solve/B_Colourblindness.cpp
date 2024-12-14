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
        string s1,s2;
        cin>>s1;
        cin>>s2;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s1[i]=='R' && s2[i]!='R'){
                flag=false;
                break;
            }
            if(s2[i]=='R' && s1[i]!='R'){
                flag=false;
                break;
            }
        }
    {flag?cout<<"YES\n":cout<<"NO\n";}

    }
    return 0;
}