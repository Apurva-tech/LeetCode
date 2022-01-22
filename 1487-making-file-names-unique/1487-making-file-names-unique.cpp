class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string,vector<int>>mp;
        vector<string>ans;
        
        for(int i=0;i<names.size();i++)
        {
            if(mp[names[i]].size()==0)
            {
                ans.push_back(names[i]);
                mp[names[i]].push_back(0);
            }
            else
            {
                    int j=(mp[names[i]][mp[names[i]].size()-1])+1;
                    string temp=names[i]+'('+to_string(j)+')';
                    
                    while(mp[temp].size()>0)
                    {
                        j++;
                        temp=names[i]+'('+to_string(j)+')';
                    }
            
                
                    ans.push_back(temp);
                    mp[temp].push_back(0);
                    mp[names[i]].push_back(j);
            }

        }
        return ans;
    }
};