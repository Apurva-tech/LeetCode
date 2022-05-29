class Solution {
public:
    int maxProduct(vector<string>& words) {
    int size=words.size();
    int stlen[size];
    for(int i=0;i<size;i++) stlen[i]=words[i].length();
    int maxx=0;
    for(int i=0;i<size;i++){
        long maps=0;
        for(char c:words[i]) maps |= (1<<(c-'a'));
        int maxjlen=0;
        for(int j=i+1;j<size;j++){
            if(stlen[j]>maxjlen){
                bool intersect=false;
                for(char c:words[j]) { if((maps>>(c-'a'))&1) {intersect=true;break;}}
                if(!intersect) maxjlen = stlen[j];
            }
        }
        maxx = max(maxx,stlen[i]*maxjlen);
    }
    return maxx;
}
};