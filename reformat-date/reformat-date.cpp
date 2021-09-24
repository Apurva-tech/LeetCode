class Solution {
public:
    unordered_map<string, string> monthMap = {
            {"Jan", "01"},
            {"Feb", "02"}, 
            {"Mar","03"}, 
            {"Apr","04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
    };
    
    string reformatDate(string date) {
        string output = "";
        if (isNumber(date[1])) { // 10+ date
            output = date.substr(9) + "-"; 
            output = output + monthMap[date.substr(5, 3)] + "-";
            output += date.substr(0, 2);
        } else { // 0-9
            output = date.substr(8) + "-";
            output = output + monthMap[date.substr(4, 3)] + "-";
            output = output + '0' + date[0];
        }
        return output;
    }
    
    bool isNumber(char n) {
        if (n == '0' || n == '1' || n == '2' || n == '3' || n == '4' || n == '5' ||
           n == '6' || n == '7' || n == '8' || n == '9') {
            return true;
        } else {
            return false;
        }
    }
};