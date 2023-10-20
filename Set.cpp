#include "标头.h"
using namespace std;
//集合常在解决联系问题时使用
//集合的定义和查找
// 集合简化形式
//集合容量
#define MaxSet 50
#define Maxinput 50
typedef int Set;
//初始化一个集合
Set* CreatSet() {
	Set s[MaxSet];
	//初始化
	for (int i = 0; i < MaxSet; i++) {
		s[i] = -1;
	}
	//初始都是根节点
	return s;
}
//按秩并归（高度）
//实现合并操作
//根节点存放的是高度的负数
void Union1(Set* s, int root1, int root2) {
	//默认是根
	// 使用时与find嵌套使用
	//对树高进行比较
	if (s[root1] > s[root2]) {
		s[root1] = root2;
	}
	else if(s[root1] < s[root2]){
		s[root2] = root1;
	}//如果树高相等随便并一个，并且更改树高
	else {
		s[root1] = root2;
		s[root2]--;
	}
}
//实现查找
//不进行路径压缩
//返回一个某一个元素根节点
int Find1(int x, Set* s) {
	for (; s[x] >= 0; x = s[x]);
	return x;
}
//下面是实现按规模并归(路径压缩)
//根节点是规模的负数
void Union2(Set* s, int root1, int root2) {
	//默认是根
	// 使用时与find2嵌套使用
	//对规模进行比较
	if (s[root1] > s[root2]) {
		//后者规模更大，将前者插入后者并且更改规模（与按秩并归不同）
		s[root2] += s[root1];
		s[root1] = root2;

	}
	else if (s[root1] < s[root2]) {
		s[root1] += s[root2];
		s[root2] = root1;
	}//如果规模相等随便并一个，并且更改规模
	else {
		s[root2] += s[root1];
		s[root1] = root2;
	}
}
int Find2(int x, Set* s) {
	//实现路径压缩
	if (s[x] < 0) {
		return x;
	}
	return s[x]=Find2(s[x], s);
}
//定义输入方法

void test01() {
	int s1[] = { 1,2,3,4 };
	int s2[] = { 11,12,13,14 };
	Set* s = CreatSet();
	//使用合并的方法建立集合
	for (int i = 1; i < sizeof(s1) / sizeof(int); i++)
		Union1(s, Find1(s1[0],s), s1[i]);
	for (int i = 1; i < sizeof(s2) / sizeof(int); i++)
		Union2(s, Find2(s2[0],s), s2[i]);
	//合并两个集合
	//因为一个是按高度创建的一个是按规模创建的所以合并不了
	//以后再测试吧
}
void test02() {
	int s1[] = { 1,2,3,4 };
	int s2[] = { 11,12,13,14 };
	cout << sizeof(s1) / sizeof(int) << "  " << sizeof(s2) / sizeof(int)<<endl;
}
int main() {
	test01();

}