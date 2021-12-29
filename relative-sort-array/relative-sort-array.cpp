class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
		for(int i = 0; i < arr1.size(); i++){
			m[arr1[i]]++;
		}
		vector<int> res;

		for(int i = 0; i < arr2.size(); i++){
			for(int j = 0; j < m[arr2[i]]; j++){
				res.push_back(arr2[i]);
			}
			m.erase(arr2[i]);
		}

		for(auto i : m){
			for(int j = 0; j < m[i.first]; j++){
				res.push_back(i.first);
			}
		}
		return res;
    }
};