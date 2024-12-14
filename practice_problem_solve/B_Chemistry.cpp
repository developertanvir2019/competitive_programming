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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        int left=0;
        int right=s.length()-1;
       while (left<right)
       {
        if(s[left]!=s[right]){
            cnt++;
            right--;
        }else{
               left++;
                right--;
        }
     
       }
       if(k==cnt)cout<<"YES\n";
       else cout<<"NO\n";
       
    }
    return 0;
}