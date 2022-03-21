from collections import Counter
from queue import PriorityQueue

class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        res = ""
        mp = Counter(nums)
        q = PriorityQueue()
        # for x in mp: 
        #     print(int(x), mp[x])
        for x in mp: 
            q.put((-1*int(x), mp[x]))
        while not q.empty():
            next_item = q.get() 
            k -= next_item[1]
            if(k <= 0):
                res = str(-1*next_item[0])
                break 
        return res 
#         string res = "";
#         unordered_map<ll, ll> mp; 
#         for(auto x : nums){
#             mp[stoll(x)]++;
#         }
#         priority_queue<pair<ll, ll>> pq;
#         for(auto x : mp) pq.push(make_pair(x.first, x.second)); 
#         while(!pq.empty()){
#             k -= pq.top().second;
#             if(k <= 0) {
#                 res = to_string(pq.top().first);
#                 break;
#             }
#             pq.pop(); 
#         }
#         return res;
