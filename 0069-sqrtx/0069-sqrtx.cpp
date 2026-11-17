class Solution {
public:
    int mySqrt(int x) {
        int low = 0 , high = x , mid  ; 
        int ans = -1 ;
        while ( low <= high ){
            mid = low + ( high- low)/2 ; 
            
            if (1LL*mid*mid<=x){
                ans=mid ;
                low = mid +1 ;
            }
            else { 
                high = mid -1 ;
            }

        } 
        return ans ;
    }
};