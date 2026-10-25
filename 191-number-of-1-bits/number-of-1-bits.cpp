class Solution {
public:
    int hammingWeight(int n) {
        int remainder , count=0 ;
        while(n>0){
          remainder=n%2 ;
          if(remainder==1){
            count++;
          }
          n=n/2; 
        }
        return count ;
    }
};