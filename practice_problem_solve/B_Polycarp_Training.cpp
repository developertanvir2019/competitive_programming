#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    int n;
    cin>>n;
   vector<int> arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

  int day=0;
  int currDay=1;
  for(int i=0;i<n;i++){
       if(arr[i]>=currDay){
        day++;
        currDay++;
       }
    }
    cout<<day<<'\n';
    return 0;
}