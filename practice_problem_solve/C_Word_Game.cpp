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
        unordered_map<string,int> wd_cnt;
       string words[3][n];
        for(int i=0;i<3;i++){
           for(int j=0;j<n;j++){
            string s;
            cin>>s;
            words[i][j]=s;
            wd_cnt[s]++;
           }
        }
        int pnt[3]={0,0,0};
        for(int i=0;i<3;i++){
           for(int j=0;j<n;j++){
            if(wd_cnt[words[i][j]]==1){
                pnt[i]+=3;
            }else if(wd_cnt[words[i][j]]==2){
                pnt[i]+=1;
            }
           }
        }

        cout<<pnt[0]<<" "<<pnt[1]<<" "<<pnt[2]<<endl;
    }
    return 0;
}