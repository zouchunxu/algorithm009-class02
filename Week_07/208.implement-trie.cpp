#include <string>

using namespace std;

class dict {
public:
    char val;
    dict *children[26];
    int end;
    dict() {
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};
class Trie {
public:
    dict *root;
    /** Initialize your data structure here. */
    Trie() {
        root = new dict();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        _insert(word, 0, root);
    }

    void _insert(string word, int first, dict *cur) {
        if (first >= word.size()) {
            cur->end = 1;
            return;
        }
        if (cur->children[word[first] - 'a'] == nullptr) {
            cur->children[word[first] - 'a'] = new dict();
            cur->children[word[first] - 'a']->val = word[first];
        }
        _insert(word, first + 1, cur->children[word[first] - 'a']);
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        dict *cur = root;
        for (int i = 0; i < word.size(); i++) {
            int ind = word[i] - 'a';
            if (cur->children[ind] == nullptr)
                return false;
            cur = cur->children[ind];
        }
        return cur->end == 1;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        dict *cur = root;
        for (int i = 0; i < prefix.size(); i++) {
            int ind = prefix[i] - 'a';
            if (cur->children[ind] == nullptr)
                return false;
            cur = cur->children[ind];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
