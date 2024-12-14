#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    int sereja=0;
    int dema=0;
    bool isSereja=true;
   while(!dq.empty()){
    int f=dq.front();
    int b=dq.back();
    if(f>b){
        if(isSereja){
            sereja+=f;
            dq.pop_front();
            isSereja=false;
        }else{
            dema+=f;
            dq.pop_front();
            isSereja=true;
        }
    }else{
         if(isSereja){
            sereja+=b;
            dq.pop_back();
            isSereja=false;
        }else{
            dema+=b;
            dq.pop_back();
            isSereja=true;
        }
    }
   }
   cout<<sereja<<" "<<dema<<endl;
    
    return 0;
}