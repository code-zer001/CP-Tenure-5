//Code for faster execution time
int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

//Solution using floyd hare tortoise alorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int temp;
        for(int i=0; i<size;i++){
            for(int j=0;j<size;j++)
            if(nums[j]>nums[i]){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp; 
            }
        }
        
    }
};