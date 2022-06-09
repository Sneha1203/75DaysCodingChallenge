int majorityElement(vector<int>& nums) {
    int maxOccurrence = INT_MIN;
    unordered_map<int, int> occurrence;
    for(int i = 0; i < nums.size(); i++) {
        occurrence[nums[i]]++;
        if(occurrence[nums[i]] > nums.size() / 2) {
            return nums[i];
        }
    }
    for(auto it: occurrence) {
        maxOccurrence = min(maxOccurrence, it.second);
    }
    return maxOccurrence;
}