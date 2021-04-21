#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
        if (N == 0 || N == 1)
            return 0;
        
        int i = 1, result = 1;
        while (result < N)
        {
          i++;
          result = i * i;
        }
        return i - 1;
    }
};