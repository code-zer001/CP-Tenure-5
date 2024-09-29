int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(auto e:nums){
            if(i==0|| nums[i-1]!=e){
                nums[i]=e;
                i++;
            }
        }
        return i;
        
    }
};