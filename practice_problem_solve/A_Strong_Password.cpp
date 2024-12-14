#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


int totalVal(string &s){
    int total=2;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            total+=1;
        }else{
            total+=2;
        }
    }
    return total;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
    string bestWord=s;
    int time =totalVal(s);
     for(int i=0;i<s.length();i++){
        for(char j='a';j<='z';j++){
            string newStr= s.substr(0,i)+j+s.substr(i);
            int currTime=totalVal(newStr);
            if(time<currTime){
                bestWord=newStr;
                time=currTime;
            }
        }
     }
     cout<<bestWord<<endl;
    }
    return 0;
}