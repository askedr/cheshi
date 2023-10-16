#include "标头.h"
struct HNode
{
	int* data;
	int size;
	int capacity;
};
#define Maxsize 100
#define Maxdata 1000 
//初始化一个堆
HNode* CreatHeap() {
	HNode* h = new(HNode);
	h->capacity = Maxsize;
	h->data = (int*)malloc(sizeof(int) * Maxsize);
	h->size = 0;//不是指向该插入元素
	h->data[0] = Maxdata;
	return h;
}
//判断是否满
bool IsFull(HNode* h) {
	return h->capacity == h->size;
}
//插入操作
//返回布尔
bool Insert(HNode* h, int x) {
	if (IsFull) {
		return false;
	}
	else {
		//调整
		int i;
		for ( i = ++h->size; i > 1 && h->data[i / 2] < x;i/=2) {
			h->data[i] = h->data[i / 2];//将小的父节点向下移动

		}
		//插入
		h->data[i] == x;

		return true;
	}
}
//判断空的操作
bool IsEmpty(HNode* h) {
	return h->size == 0;
}
//删除操作返回删除的最大值
int DeleteMax(HNode* h) {
	
	if (IsEmpty) {
		return -1;
	}
	else {
		int max = h->data[1];
		int maxch;
		int fa = 1;
		//使用最后元素替换(非实质)最大值
		int tail = h->data[h->size--];
		//依次向下过滤节点
		//找到左右儿子最大值
		// 当最后节点没有儿子时或以tail为根节点已变为最大堆
		for (; fa * 2 <= h->size; fa = maxch) {
			//找最大儿子
			maxch = fa * 2;
			if (maxch != h->size && h->data[maxch + 1] >= h->data[maxch]) {
				maxch++;
			}
			//已成为最大堆
			if (h->data[maxch] <= tail) break;
			else h->data[fa] = h->data[maxch];
		}
		//赋值
		h->data[fa] = tail;
		return max;
	}
}
//调整节点方法去创建一个堆
// 数据已经插入一个完全树中
//与删除操作比较像，解决左边是一个堆右边是一个堆怎么去调成一个堆
//使用两个函数实现
void PercDown(HNode* h, int p) {
	int x = h->data[p];//取根结点值
	int fa = p;
	int maxch;
	//依次向下过滤节点
	//找到左右儿子最大值
	// 当最后节点没有儿子时或以x为根节点已变为最大堆
	for (; fa * 2 <= h->size; fa = maxch) {
		//找最大儿子
		maxch = fa * 2;
		if (maxch != h->size && h->data[maxch + 1] >= h->data[maxch]) {
			maxch++;
		}
		//已成为最大堆
		if (h->data[maxch] <= x) break;
		else h->data[fa] = h->data[maxch];
	}
	//赋值
	h->data[fa] = x;
}
void BuildHeap( HNode*h)
{ /* 调整H->Data[]中的元素，使满足最大堆的有序性  */
  /* 这里假设所有H->Size个元素已经存在H->Data[]中 */

	int i;

	/* 从最后一个结点的父节点开始，到根结点1 */
	for (i = h->size / 2; i > 0; i--)
		PercDown(h, i);
}