class Solution {
public:
    bool squareIsWhite(string cd) {
        int check = 0;
        if(cd[0] == 'a') check += 1;
        else if(cd[0] == 'b') check += 2;
        else if(cd[0] == 'c') check += 3;
        else if(cd[0] == 'd') check += 4;
        else if(cd[0] == 'e') check += 5;
        else if(cd[0] == 'f') check += 6;
        else if(cd[0] == 'g') check += 7;
        else if(cd[0] == 'h') check += 8;
        char a = cd[1];
        check += (a - '0');
        cout << check;
        if(check%2 == 0) return false;
        return true;
    }
};