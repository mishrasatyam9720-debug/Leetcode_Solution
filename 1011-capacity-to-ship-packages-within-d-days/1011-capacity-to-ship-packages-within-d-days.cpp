class Solution {
public:

    bool total_days(vector<int>& weights, int capacity, int days) {

    int currentWeight = 0;
    int daysUsed = 1;

    for (int i = 0; i < weights.size(); i++) {

        if (currentWeight + weights[i] <= capacity) {
            currentWeight += weights[i];
        }
        else {
            daysUsed++;
            currentWeight = weights[i];
        }
    }

    return daysUsed <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(),weights.end());
       int mid ;
       int sum = 0 ;
       for (int i=0 ; i<weights.size() ; i++){
        sum = sum + weights[i] ;
       } 

     int high = sum ;
     while(low<=high){
       mid = low + (high - low)/2 ;
       if (total_days(weights,  mid, days)==true){
        high = mid - 1 ;
       }
       else {
        low = mid + 1 ;
       }
     }
     return low;
    }
};