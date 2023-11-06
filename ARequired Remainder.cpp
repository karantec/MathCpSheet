//login even or odd
#include<bits/stdc++.h>
using namespace std;

// n 
//k 1 to n
//k mode  x=y
//_ modex=y
//x y n
// 7 5 12345
// n mod x-> res
//12345%7 ->4
//12344%7->3
//12342%7->2
//12339%7->1
//start -final
//4-5=-1 +7=6
int main() {
  long long t,x,y,n;
  cin>>t;
  while(t--){
   cin>>x>>y>>n;
   int rem=n%x;
   int change=(rem-y+x)%x;
   n-=change;
   cout<<n<<endl;
  }
  
  return 0;
}