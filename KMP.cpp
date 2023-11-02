#include "标头.h"
//实现kmp算法
//没有做成任意输入
using namespace std;
#define Nextsize 20
bool ju(char* m ,int msize ,char z[],int zsize) {
	//首先建立next数组；
	int next[Nextsize];//与输入数组长度相关
	//赋值next
	int max = 0;//指最大前后缀
	int i=0;
	while(i<zsize) {
		if (i == 0) {
			//next初始
			next[0] = max;
			i++;
		}else if (z[i] == z[max]) {
			//如果新加入的元素与当前最大前缀的下一个元素相同
			max++;//最大前缀加一
			next[i] = max;
			i++;
		}
		else {
			//如果不相同
			if (max == 0) {
				//如果此时最大前瞻是0
				next[i] = 0;
				i++;
			}
			else
				//如果此时最大前后缀不是零
				//注意此时是不会过去这个元素的
			max = next[max-1];

		}
	}
	//开始比较
	for (int i = 0, j = 0;i<msize; j++,i++) {
		if (m[i] != z[j]) {
			//回溯指针i
			if (j == 0) {

			}else
			j = next[j-1];
		}
		if (j == zsize-1)return true;
	}
	
	return false;
}
//暴力求解
bool ju02(char* m, int msize, char z[], int zsize) {
	//遍历母串
	bool j = false;
	for (int i = 0,j=0; i < msize; i++) {
		if (m[i] == z[0]) {
			 j = true;
			for (; j < zsize; j++) {
				if (m[i + j] != z[j]) {
					j = false;
					break;
				}
			}
		}
		if (j == true) {
			return j;
		}
		
	}

}
int main() {
	//主串
	/*int msize = 9;*/
	/*char m[] = { 'q','e','c','a','b','c','a','b','b'};*/
	
	//子串
	/*int zsize = 6;
	char z[] = { 'a','b','c','a','b','b' };*/
	//判断
	int msize;
	int zsize;
	char m[20];
	char z[20];
	cout << "母串长度" << endl;
	cin >> msize;
	cout << "母串" << endl;
	cin >> m;
	cout << "子串长度" << endl;
	cin >> zsize;
	cout << "子串" << endl;
	cin >> z;
	cout << m << " " << z << endl;
     bool t=ju(m,msize, z,zsize);
	 bool t2 = ju02(m, msize, z, zsize);
	 if (t) {
		 cout << "yes"<<endl;
	 }
	 else {
		 cout << "no" << endl;
	 }
	 if (t2) {
		 cout << "yes" << endl;
	 }
	 else {
		 cout << "no" << endl;
	 }
}
