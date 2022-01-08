class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int loops=0,i=0,curr_candies;
       while(candies>0)
       {
           if(i==num_people)
           {
              loops++;
              i=0;
           }  
           curr_candies=loops*num_people+i+1;
           if(candies-curr_candies<0)
           {
              ans[i]+=candies;
           }
           else
           ans[i]+=curr_candies;
           candies-=curr_candies;
           i++;
       }
        return ans;
    }
};