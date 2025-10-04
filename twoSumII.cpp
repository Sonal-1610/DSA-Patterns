class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int ans=0;
        while(i<j){
           ans=numbers[i]+numbers[j];
           if(ans==target){
            return {i+1,j+1};
           }
           else if(ans>target){
            j--;
           }
           else{
            i++;
           }
        }
        return {};
    }
};