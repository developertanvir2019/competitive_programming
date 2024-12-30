#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    fast();
    vector<int> arr={5,7,2,8};
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}