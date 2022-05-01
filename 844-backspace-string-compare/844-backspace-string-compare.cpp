class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#' && !st1.empty()) st1.pop();
            if(s[i] == '#' && st1.empty()) continue;
            if(s[i]!='#') st1.push(s[i]); 
            // cout << st1.top() << " ";
        }
        
        for(int i = 0; i < t.size(); i++){ 
            if(t[i] == '#' && !st2.empty()) st2.pop();
            if(t[i] == '#' && st2.empty()) continue;
            if(t[i]!='#') st2.push(t[i]);
        }
        // cout << st1.size() << " " << st2.size() << endl;
        if(st1.size()!=st2.size()){ return false;}
        while(!st1.empty() && !st2.empty()){
            
            if(st1.top() != st2.top()) return false;
            // cout << st1.top() << " " << st2.top() << endl;
            st1.pop(); st2.pop();
        }
        
        return true;
    }
};