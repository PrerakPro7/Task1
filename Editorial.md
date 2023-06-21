**Editorial**:

This problem can be solved in $O(n)$ time efficiently.

Firstly, we need to create a vector to store perfect squares till
$n$.This can be done in $O(\sqrt{n})$ time complexity.

Then we will traverse through this array and count the number of factors
of each element(which can be done in $O(\sqrt{n})$ time complexity using
the [property of
factors](https://www.geeksforgeeks.org/find-all-factors-of-a-natural-number/))
and check whether count is a perfect square using the
[sqrt()](https://cplusplus.com/reference/cmath/sqrt/) function.

Thus, this problem can be achieved in $O(\sqrt{n}.\sqrt{n})=O(n)$ time
complexity.

**Solution**:

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
      for(int i=1;i<=n;i+=2*c-1){
      arr[c++]=i;
      }
      vector<int>brr(p+1); // vector to store primal numbers till n
      int mcount=0; 
      c=1;
      for(int i=1;i<=p;i++){
          int count=0;
          for(int j=1;j*j<=arr[i];j++){
            if(!(arr[i]%j))count++;
          }
          if(ceil(sqrt(2*count-1))==floor(sqrt(2*count-1))){
              mcount++;
              brr[c++]=arr[i];
          }
      }
      cout << mcount << endl;
      for(int i=1;i<=mcount;i++) cout << brr[i] << " ";
      cout << endl;
      }
    }
