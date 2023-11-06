#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int result=n/5;
    if(n%5>0)result++;
    cout<<result;

  return 0;
}