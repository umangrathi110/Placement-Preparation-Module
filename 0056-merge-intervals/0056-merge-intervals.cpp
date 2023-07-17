class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        int x = intervals[0][0], y= intervals[0][1];
        for (int i = 1 ; i < intervals.size() ; i++){
            if (intervals[i][0] <= y){
                x = min(x,intervals[i][0]);
                y = max(y,intervals[i][1]);
            }
            else{
                v.push_back({x,y});
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        v.push_back({x,y});
        return v;
    }
};