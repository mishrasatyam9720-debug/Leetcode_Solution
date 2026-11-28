class Solution {
public:
    int magnetic_force(int mid , vector<int>position , int m ){
        int digit = 1 ;
        int last_position=position[0] ;
        for(int i = 1 ; i< position.size();i++){
            if((position[i]-last_position)>=mid)
            {
                digit++ ;
                last_position=position[i] ;
            }
        
    }
    return digit>=m ;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 1 ;
        int high = *max_element(position.begin(),position.end()) - *min_element(position.begin(),position.end()) ;
        int ans = -1 ;
        while(low<=high){
            int mid = low+(high-low)/2 ;
            if(magnetic_force(mid,position,m)==true){
              ans=mid ;
              low = mid+1 ; 
            }
            else{
                high = mid -1 ;
            }
        }
        return ans ;
    }
};