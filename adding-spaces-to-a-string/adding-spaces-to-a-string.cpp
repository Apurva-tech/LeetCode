class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        int M= s.size(), N= sp.size() , l=0 , r=0 ; 
        string res(M+N,' ');
        for(int i=0;i<M+N;i++){
            if( l<N and i==sp[l]+l )  l++;    
            else   res[i]=s[r++];
        }
        return res;
    }
};