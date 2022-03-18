class Solution {
public:
    string smallestSubsequence(string s) {
        int cnt[256]={0};
        vector<int> vis(256,false);
        for(auto it:s)
            cnt[it]++;
        int n=s.length();
        string ans="0";
        for(int i=0;i<n;i++)
        {
            cnt[s[i]]--;
            if(vis[s[i]])continue;
            while(s[i]<ans.back() and cnt[ans.back()])
            {
                vis[ans.back()]=false;
                ans.pop_back();
            }
            ans+=s[i];
            vis[s[i]]=true;
        }
        return ans.substr(1,string::npos); 
    }
};