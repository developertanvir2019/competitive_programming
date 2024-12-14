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
        char wb[n+1];
        for(int i=1;i<=n;i++){
            cin>>wb[i];
        }
        int firstIdx=0;
        int lastIdx=0;
         for(int i=1;i<=n;i++){
           if(wb[i]=='B'){
            if(firstIdx<1){
                firstIdx=i;
            }else{
                lastIdx=i;
            }
           }
        }
        if(lastIdx) cout<<abs(firstIdx-lastIdx)+1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}