#include "标头.h"
//实现kmp算法
//没有做成任意输入
bool ju(char* m, char z[]) {
	//首先建立next数组；
	int next[20];//与输入数组长度相关
	//赋值next
	int max = 0;
	int i=0;
	while(i<6) {
		if (i == 0) {
			next[0] = max;
			i++;
		}else if (z[i] == z[max]) {
			max++;
			next[i] = max;
			i++;
		}
		else {
			if (max == 0) {
				next[i] = 0;
				i++;
			}
			else
				max = next[max-1];

		}
	}
	//开始比较
	for (int i = 0, j = 0;i<9; j++,i++) {
		if (m[i] != z[j]) {
			//回溯指针i
			if (j == 0) {

			}else
			j = next[j-1];
		}
		if (j == 5)return true;
	}
	
	return false;
}
int main() {
	char m[] = { 'q','e','c','a','b','c','a','b','b'};
	char z[] = { 'a','b','c','a','b','b' };
     bool t=ju(m, z);
}