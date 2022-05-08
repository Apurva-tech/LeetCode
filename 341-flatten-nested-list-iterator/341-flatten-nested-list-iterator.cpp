/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    vector<int>nums;
    int pos = -1; 
    NestedIterator(vector<NestedInteger> &nestedList) {
        convert(nestedList);
        pos = 0;
    }
    void convert(vector<NestedInteger>&lis){
        for(auto i:lis){
            if(i.isInteger()) nums.push_back(i.getInteger()); 
            else{
                convert(i.getList());
            }
        }
    }
    
    int next() {
        return nums[pos++]; 
    }
    
    bool hasNext() {
        return pos < nums.size(); 
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */