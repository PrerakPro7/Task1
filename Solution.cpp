#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  int p=(int)sqrt(n),c=1; 
  vector<int>arr(p+1); //vector to store perfect squares less than equal to n
  vector<bool>crr(n+1,false); // vector with perfect squares index value as true
  for(int i=1;i<=n;i+=2*c-1){
  arr[c++]=i;
  crr[i]=true;
  }
  vector<int>brr(p+1); // vector to store primal numbers till n
  int mcount=0; 
  c=1;
  for(int i=1;i<=p;i++){
      int count=0;
      for(int j=1;j*j<=arr[i];j++){
        if(!(arr[i]%j))count++;
      }
      if(crr[2*count-1]){
          brr[c++]=arr[i];
          mcount++;
      }
  }
  cout << mcount << "\n";
  for(int i=1;i<=mcount;i++) cout << brr[i] << " ";
  cout << "\n";
  }
}