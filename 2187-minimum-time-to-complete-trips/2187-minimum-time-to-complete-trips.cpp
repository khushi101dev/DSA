class Solution {
public:
    bool possible(vector<int>& time,long long givenTime, int totalTrips){
        long long actualTrips = 0;
        for(int &t: time ){
            actualTrips += givenTime/t;
        }
        return actualTrips >= totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1; 
        long long high = ((long long)*min_element(begin(time), end(time))*totalTrips);
        int n = time.size();

        while(low < high){
            long long mid_time = low + (high - low)/2;
            if(possible(time,mid_time,totalTrips)){
                high = mid_time;
            }
            else{
                low = mid_time + 1;
            }

        }
        
        return low;
    }
};