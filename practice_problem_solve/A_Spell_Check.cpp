#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
bool isPer(string &s,string &name){
    if(s.length()!=name.length()) return false;
   string s_sort=s;
   string name_sort=name;
   sort(s_sort.begin(),s_sort.end());
   sort(name_sort.begin(),name_sort.end());
   return s_sort==name_sort;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--){
    string name="Timur";
    int n;
    cin>>n;
   string s;
   cin>>s;
    if(isPer(s,name))cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}