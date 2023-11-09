#include "标头.h"
using namespace std;
class Trie {
	//字典树实现字符串的插入删除
private:
	//类的嵌套
	bool IsEnd;
	Trie* next[26];
public:
	Trie() {
		IsEnd = false;
		memset(next, 0, sizeof(next));//全是零相当于空
	}
	//插入操作
	void insert(string word) {
		Trie* node = this;
		for (char c : word) {
			if (node->next[c - 'a'] == NULL) {
				node->next[c - 'a'] = new(Trie);
			}
			node = node->next[c - 'a'];
		}
		node->IsEnd = true;
	}
	//查找
	bool search(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return node->IsEnd;
	}
	//查找前缀
	bool startsWith(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return true;
	}

};
