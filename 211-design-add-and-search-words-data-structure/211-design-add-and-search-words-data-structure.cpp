class WordDictionary {
public:
	unordered_map<int,vector<string>> mp;
	WordDictionary() {
		mp.clear();
	}

	void addWord(string word) {
		//add word to its corresponding key size
		mp[word.size()].push_back(word);
	}

	//comparing my search word with all other words having same length
	bool check(string &s, string &p){
		for(int i=0;i<p.length();i++){
			if(p[i]=='.') continue;
			if(p[i]!=s[i]) return false;
		}
		return true;
	}

	bool search(string word) {
		//if any word of same length does not exist return false
		if(mp.find(word.size())==mp.end())  return false;
		vector<string> v=mp[word.size()];
		for(auto it: v){
			if(check(it,word)) return true;
		}
		return false;
	}
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */