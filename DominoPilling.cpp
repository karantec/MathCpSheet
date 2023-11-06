#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n,m;
    cin>>n>>m;
    int res=m*(n/2);
    if(n%2==1) res+=m/2;
    cout<<res<<endl;

  return 0;
}