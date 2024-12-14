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
        vector<int>after(n);
        for(int i=0;i<n;i++){
            cin>>after[i];
        }
        for(int i=0;i<n;i++){
            int move;
            string s;
            cin>>move>>s;
            for(int j=0;j<move;j++){
                if(s[j]=='D'){
                   if(after[i]==9){
                    after[i]=0;
                   }else{
                     after[i]++;
                   }
                }else if(s[j]=='U'){
                     if(after[i]==0){
                    after[i]=9;
                   }else{
                     after[i]--;
                   }
                }
            }
        }
          for(int i=0;i<n;i++){
            cout<<after[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}