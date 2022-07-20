class Solution {
public:
    int numMatchingSubseq (string S, vector<string>& words) {
		unordered_map<char, vector<int>> alpha;
		for (int i = 0; i < S.size (); ++i){
            alpha[S[i]].push_back (i);
        }
		int res = 0;
		for (const auto& word : words) {
			int x = -1;
			bool found = true;
			for (char c : word) {
				auto it = upper_bound (alpha[c].begin (), alpha[c].end (), x);
				if (it == alpha[c].end ()) {
                    found = false;
                    break;
                }
				else {
                    x = *it;
                }
			}
			if (found) {
                res++;
            }
		}

		return res;
	}
};