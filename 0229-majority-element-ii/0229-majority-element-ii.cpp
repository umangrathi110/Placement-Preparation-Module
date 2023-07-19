class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1, el2, cnt1 = 0, cnt2 = 0;
        for (int i =0 ; i < nums.size() ; i++){
            if (cnt1 == 0 and el2 != nums[i]){
                el1 = nums[i];
                cnt1++;
            }
            else if (cnt2 ==0 and el1 != nums[i]){
                el2 = nums[i];
                cnt2++;
            }
            else if (nums[i] == el1) cnt1++;
            else if (nums[i] == el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> v;
        cnt1 = 0, cnt2 = 0;
        for (auto i : nums){
            if (i == el1) cnt1++;
            if (i == el2) cnt2++;
        }
        if (cnt1 > nums.size()/3) v.push_back(el1);
        if (cnt2 > nums.size()/3) v.push_back(el2);
        sort(v.begin(), v.end());
        return v;
    }
};