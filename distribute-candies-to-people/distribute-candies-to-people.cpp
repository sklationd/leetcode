class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int c = 1;
        vector<int> d(num_people);
        while(candies){
            for(int i=0;i<num_people;i++){
                if(c < candies){
                    d[i]+=c;
                    candies-=c;
                    c++;
                } else {
                    d[i]+=candies;
                    candies = 0;
                    break;
                }
            }    
        }
        return d;
    }
};