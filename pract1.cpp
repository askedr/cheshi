#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include <iostream>   //编译预处理命令

// /*Definition for singly-linked list.*/
//struct ListNode {
//    int val;
//    struct ListNode *next; };
// 
//
//struct ListNode* CreateNode() {
//    ListNode* phead = (ListNode*)malloc(sizeof(ListNode));
//    return phead;
//}
//int DataList(ListNode* l) {
//    assert(l);
//    int sum = 0;
//    int base = 10;//进制
//    int wei = 1;
//    while (l->next != NULL) {
//        sum += l->val*wei;
//        wei *= base;
//        l = l->next;
//    }
//    return sum;
//}
//int LowBit(int data) {
//    int lowbit = data % 10;
//    return lowbit;
//}
//int Conversion(char c) {
//    switch (c) {
//    case'0':return 0;
//    case'1':return 1;
//    case'2':return 2;
//    case'3':return 3;
//    case'4':return 4;
//    case'5':return 5;
//    case'6':return 6;
//    case'7':return 7;
//    case'8':return 8;
//    case'9':return 9;
//    }
//
//}
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//    ListNode* l3 = CreateNode();
//    l3 ->next = NULL;
//    ListNode* cur= l3;
//    int l1Date = DataList(l1);
//    int l2Date = DataList(l2);
//    求和
//    int SumList = l1Date + l2Date;
//    对l3赋值从低位存起
//    if (SumList == 0) {
//        cur->val = SumList;
//
//    }
//    else {
//        char DataStr[100];
//        sprintf(DataStr, "%d", SumList);
//        for (int i = 0; DataStr[i] != '\0'; i++) {
//            cur->val = Conversion(DataStr[i]);
//            l3 = CreateNode();
//            l3->next = cur;
//            cur = l3;
//        }
//    }
//    return l3;
//}
//使用栈进行进制转换（除法取余）
//void CreateTack()
//int BaseConversion(int data, int base) {
//	int quotient=0;
//	int reminder=1;
//	while (reminder != 0) {
//		quotient = data / base;
//		reminder = data % base;
//	}
//}
//使用栈进行符号判断
//char RetuenSign(char c) {
//	if (c == '(') {
//		return ')';
//	}
//	else if (c == '{') {
//		return '}';
//	}
//	else if (c == '[') {
//		return ']';
//	}
//	else {
//		return '\0';
//	}
//}
//bool isValid(char* s) {
//	int n = strlen(s)+1;
//	char* stack = (char*)malloc(sizeof(char) * n);
//	int top = 0;
//	int base = 0;
//	for (int i=0; s[i] != '\0'; i++) {
//		
//		if (top != base && RetuenSign(stack[top - 1]) == s[i]) {
//			//出栈
//			top--;
//		}
//		else {
//			//入栈
//			stack[top] = s[i];
//			top++;
//		}
//	}
//	//判断
//	if (top == base)return true;
//	else return false;
//}
//void test() {
//	char s[] = "[[[[[[[[[[[[[[[[[[[";
//	printf("%d", isValid(s));
//}
//void test2() {
//	char* s;
//	printf("%d", sizeof(s));
//}
//int main() {
//	//test();
//	test2();
//}
//输出链表相交节点的值


//  struct ListNode {
//      int val;
//      struct ListNode *next;
//  };
// 
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//	ListNode* curA = headA;
//	ListNode* curB = headB;
//	while (curA !=NULL) {
//		curB = headB;
//		while (curB!=NULL) {
//			//先以A为基准对B遍历
//			if (curA == curB) return curA;
//			curB = curB->next;
//		}
//		curA = curA->next;
//	}
//	return NULL;
//}
//ListNode* CreateList() {
//	ListNode* head = (ListNode*)malloc(sizeof(ListNode) * 1);
//	head->next = NULL;
//	return head;
//}
//void InsertionNode(ListNode*head,int date) {
//	ListNode* NowNode= (ListNode*)malloc(sizeof(ListNode) * 1);
//	NowNode->val = date;
//	NowNode->next=head->next;
//	head->next = NowNode;
//}
//void PrintList(ListNode* head) {
//	while (head != NULL) {
//		printf("%d\n", head->val);
//		head = head->next;
//	}
//}
//void test() {
//	//创建链表
//	ListNode* headA = CreateList();
//	ListNode* headB = CreateList();
//	//插入
//	int A[] = { 4,1,8,4,5 };
//	int B[] = { 5,6,1,8,4,5 };
//	for (int i = 4; i!=-1; i--) {
//		InsertionNode(headA, A[i]);
//	}
//	for (int i = 5; i != -1; i--) {
//		InsertionNode(headB, B[i]);
//	}
//	//查找替换
//	ListNode* curA=headA;
//	ListNode* curB=headB;
//	while ((curA->next)->val !=8 ) {
//		curA = curA->next;
//	}
//	while ((curB->next)->val != 8) {
//		curB = curB->next;
//	}
//	//替换
//	
//	ListNode* DeleteNode = curB->next;
//	curB->next = curA->next;
//	curB = DeleteNode->next;
//	while (DeleteNode->next != NULL) {
//		free(DeleteNode);
//		DeleteNode = curB;
//		curB = curB->next;
//	}
//	PrintList(headA);
//	PrintList(headB);
//	//开始检验
//	ListNode*input= getIntersectionNode(headA, headB);
//	printf("%d", input->val);
//}
//
//int main() {
//	test();
//}
//数组操作
//void movedate(int* top, int* tail) {
//    int* cur = top + 1;
//    while (cur != tail + 1) {
//        *(cur - 1) = *cur;
//        cur++;
//    }
//}//移动两者之间元素
//void moveZeroes(int* nums, int numsSize) {
//    int top = 0;
//    int tail = numsSize - 1;
//    //确定尾指针
//    for (int i = numsSize - 1; nums[i] == 0; i--) {
//        tail--;
//    }
//    for (; tail >= top; top++) {
//        if (nums[top] == 0) {
//            movedate(&nums[top], &nums[tail]);
//            nums[tail] = 0;
//            tail--;
//        }
//    }
//}
//void test() {
//    int nums[] = { 0,0};
//    moveZeroes(nums, 2);
//    for (int i = 0; i < 2; i++) {
//        printf("%d", nums[i]);
//    }
//
//}
//int main() {
//    test();
//}
//链队列实现

//struct Node {
//    int date;
//    Node* next;
//};
//struct LinkQueue {
//    Node* front;
//    Node* tail;
//};
//LinkQueue* CreatQueue() {
//    LinkQueue* queue;
//    queue = (LinkQueue*)malloc(sizeof(LinkQueue)); 
//    queue->front = (Node*)malloc(sizeof(Node));
//    queue->front->next = NULL;
//    queue->tail = queue->front;
//    return queue;
//}
//void PushQueue(LinkQueue*queue,int date) {
//    Node* nownode = (Node*)malloc(sizeof(Node));
//    nownode->date = date;
//    nownode->next = NULL;
//    queue->tail->next = nownode;
//    queue->tail = nownode;
//}
//void Polistueue(LinkQueue* queue) {
//    if (queue->front == queue->tail)return;
//    Node* p = queue->front->next;
//    free(queue->front);
//    queue->front = p;
//
//}
//int DateQueue(LinkQueue* queue) {
//    return queue->front->next->date;
//}//取头元素
//void DestroyQueue(LinkQueue* queue) {
//    Node* p;
//    while(queue->front != NULL) {
//        p=queue->front->next;
//        free(queue->front);
//        queue->front = p;
//    }
//}
//void PrintQueue(LinkQueue* queue) {
//    assert(queue->front != queue->tail);
//    Node* cur = queue->front->next;
//    while (cur != NULL) {
//        printf("%d  ", cur->date);
//        cur = cur->next;
//    }
//}
//
//typedef struct {
//    LinkQueue* qu1;
//    LinkQueue* qu2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//    MyStack* queue = (MyStack*)malloc(sizeof(MyStack));
//    queue->qu1 = CreatQueue();
//    queue->qu2 = CreatQueue();
//    return queue;
//}
//
//void myStackPush(MyStack* obj, int x) {
//    //插入辅助队列
//    PushQueue(obj->qu2, x);
//    //辅助队列插入主队列元素
//    while (obj->qu1->tail!=obj->qu1->front) {
//        PushQueue(obj->qu2, DateQueue(obj->qu1));
//        Polistueue(obj->qu1);//删除已插入的主元素
//    }
//    //互换队列
//    LinkQueue* t = obj->qu1;
//    obj->qu1 = obj->qu2;
//    obj->qu2 = t;
//   
//}
//bool myStackEmpty(MyStack* obj);
//int myStackPop(MyStack* obj) {
//    //判断是否为空
//    if (myStackEmpty(obj))return 0;
//    //返回元素
//    int date= DateQueue(obj->qu1);
//    //删除栈顶
//    Polistueue(obj->qu1);
//    return date;
//}
//
//int myStackTop(MyStack* obj) {
//    return DateQueue(obj->qu1);
//}
//
//bool myStackEmpty(MyStack* obj) {
//    if (obj->qu1->front == obj->qu1->tail)return true;
//    return false;
//}
//
//void myStackFree(MyStack* obj) {
//    DestroyQueue(obj->qu1);
//    DestroyQueue(obj->qu2);
//}
//void test() {
//    MyStack* obj;
//    obj = myStackCreate();
//    myStackPush(obj,1);
//    myStackPush(obj, 2);
//    myStackPush(obj, 3);
//    myStackPush(obj, 4);
//    myStackPush(obj, 5);
//    myStackPop(obj);
//    PrintQueue(obj->qu1);
//}
///**
// * Your MyStack struct will be instantiated and called as such:
// * MyStack* obj = myStackCreate();
// * myStackPush(obj, x);
//
// * int param_2 = myStackPop(obj);
//
// * int param_3 = myStackTop(obj);
//
// * bool param_4 = myStackEmpty(obj);
//
// * myStackFree(obj);
//*/
//int main() {
//    test();
//}//回文数

 // struct ListNode {
 //    int val;
 //     struct ListNode *next;
 //};
 // bool isPalindrome(struct ListNode* head) {
	//  //正序遍历等于倒序遍历
	//  //遍历获得两个指针
	//  int count = 0;
	//  struct ListNode* cur = head;
	//  struct ListNode* top = head;
	//  while (cur->next != NULL) {
	//	  cur = cur->next;
	//	  count++;
	//  }
	//  while (top != NULL) {
	//	  cur = head;
	//	  for (int i = 1; i <= count; i++) {
	//		  cur = cur->next;
	//	  }
	//	  if (top->val != cur->val)return false;
	//	  top = top->next;
	//	  count--;
	//  }
	//  return true;
 // }
 
 // }
 

//  struct ListNode {
//      int val;
//      struct ListNode *next;
//  };
//
// //快慢指针
// //翻转链表分分偶
//struct ListNode* linko(struct ListNode* head, struct ListNode* tail) {
//	//head和tail可能相等
//	if (head == tail) {
//		head->next = NULL;
//		return head;
//	}
//	struct ListNode* one = NULL;
//	struct ListNode* two = head;
//	struct ListNode* three = head->next;
//	while (1) {
//		two->next = one;
//		one = two;
//		two = three;
//		if (two == NULL)break;
//		three = three->next;
//	}
//	return one;
//}
//bool isPalindrome(struct ListNode* head) {
//	struct ListNode* head1;
//	struct ListNode* tail1;
//	struct ListNode* head2;
//	struct ListNode* tail2;
//	//将链表分开
//	struct ListNode* low = head;
//	struct ListNode* qu = head;
//	for (;; low = low->next, qu = qu->next->next) {
//		//几链表
//		if (qu->next == NULL) {
//			head1 = head;
//			tail1 = low;
//			head2 = low;
//			tail2 = qu;
//			break;
//		}
//		//偶链表
//		if (qu->next->next == NULL) {
//			head1 = head;
//			tail1 = low;
//			head2 = low->next;
//			tail2 = qu->next;
//			break;
//		}
//
//	}
//	//进行翻转
//	struct ListNode* list1 = linko(head1, tail1);
//	struct ListNode* list2 = linko(head2, tail2);
//	//判断
//	for (; list1 != NULL; list1 = list1->next, list2 = list2->next) {
//		if (list1->val != list2->val)return false;
//	}
//	return true;
//}
//void pushlist(ListNode* head, int x) {
//	ListNode* nownode = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* t;
//	nownode->val = x;
//	t = head->next;
//	head->next = nownode;
//	nownode->next = t;
//
//}
//void printlist(ListNode* head) {
//	ListNode* cur = head;
//	while (cur != NULL) {
//		printf("%d  ", cur->val);
//		cur = cur->next;
//	}
//}
//int main() {
//	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
//	head->next = NULL;
//	head->val = 1;
//	pushlist(head, 1);
//	pushlist(head, 2);
//	pushlist(head, 2);
//	printlist(head);
//	printf("%d",isPalindrome(head));
//	}


//使用连续
//typedef struct MyQueue{
//	int stack1[500];
//	int top1 = 0;
//	int stack2[500];
//	int top2 = 0;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	struct MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
//	return queue;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	//压入主站
//	obj->stack1[obj->top1++] = x;
//}
//int myQueuePop(MyQueue* obj) {
//	//放入辅栈
//	for (; obj->top1 >= 0; obj->top1--) {
//		obj->stack2[obj->top2++] = obj->stack1[obj->top1];
//	}
//	obj->top1 = 0;
//	int date = obj->stack2[obj->top2 - 1];
//	//放回
//	for (; obj->top2 >= 0; obj->top2--) {
//		obj->stack2[obj->top1++] = obj->stack1[obj->top2];
//	}
//	obj->top2 = 0;
//	return date;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	//主栈头
//	return obj->stack1[obj->top1 - 1];
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	if (obj->top1 == 0)return true;
//	return false;
//}
//
//void myQueueFree(MyQueue* obj) {
//	free(obj);
//}
//
//int main() {
//	MyQueue* p = myQueueCreate();
//	myQueuePush(p, 1);
//	myQueuePush(p, 2);
//	myQueuePush(p, 3);
//	myQueuePush(p, 4);
//	myQueuePeek
//}
///**
// * Your MyQueue struct will be instantiated and called as such:
// * MyQueue* obj = myQueueCreate();
// * myQueuePush(obj, x);
//
// * int param_2 = myQueuePop(obj);
//
// * int param_3 = myQueuePeek(obj);
//
// * bool param_4 = myQueueEmpty(obj);
//
// * myQueueFree(obj);
//*/
//水桶问题
//#define heightSize 9
//int min(int a, int b) {
//	if (a > b)return b;
//	return a;
//}
//int maxArea(int* height) {
//	int c[heightSize];//放容积数组
//	int l = 0;
//	int r = 0;
//	int cic = 0;
//	int num = 0;
//	int cmax;
//	int ccurrent = 0;
//	while (l < heightSize - 1) {
//		//初始化溶及
//		cmax = 0;
//		r = l + 1;
//		while (r < heightSize) {
//
//			//计算容积并且存储
//			ccurrent = (r - l) * min(height[l], height[r]);
//			//比较
//			if (ccurrent > cmax)cmax = ccurrent;
//			r++;
//		}//定l动r
//	//放入数组
//		c[num++] = cmax;
//		l++;
//	}//填满容积数组
//	//比较容积数组
//	int max = 0;
//	for (int i = 0; i < heightSize; i++) {
//		if (max < c[i])max = c[i];
//	}
//	return max;
//}
//int main() {
//	int a[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
//	int size = 9;
//	printf("%d", maxArea(a));
//}
//合并链表
// struct ListNode {
//     int val;
//      struct ListNode *next;
//  };
//void pushtill(struct ListNode* taill, int x) {
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newnode->val = x;
//    newnode->next = NULL;
//    taill->next = newnode;
//}//尾插操作
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    //放入新链表
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->next = NULL;
//    //新链表指针
//    struct ListNode* cur = head;
//    while (list1 != NULL || list2 != NULL) {
//        //比大小
//        if (list1 == NULL) {
//            pushtill(cur, list2->val);
//            list2 = list2->next;
//            ;
//        }
//        if (list2 == NULL) {
//            pushtill(cur, list1->val);
//            list1 = list1->next;
//            break;
//        }
//        if (list1->val < list2->val) {
//            //插入
//            pushtill(cur, list1->val);
//            list1 = list1->next;
//        }
//        else {
//            pushtill(cur, list2->val);
//            list2 = list2->next;
//        }
//        cur = cur->next;
//    }
//    struct ListNode* r = head->next;
//    free(head);
//    return r;
//}
//int main() {
//    ListNode* list1 = (ListNode*)malloc(sizeof(ListNode));
//    list1->val = -9;
//    ListNode* list2 = (ListNode*)malloc(sizeof(ListNode));
//    list2->val =5;
//    pushtill(list1, 3);
//    pushtill(list2, 7);
//    mergeTwoLists(list1, list2);
//}
//void d(int* nums, int numsSize, int kr, int i, int count, int r) {
//	if (count == 0) {
//		r = nums[(i + kr)%numsSize];
//		nums[(i + kr)%numsSize] = nums[i];
//		count++;
//	}
//	else {
//		int r2 = r;
//		r = nums[(i + kr) % numsSize];
//		nums[(i + kr) % numsSize] = r2;
//		count++;
//	}
//	if (count == numsSize)return;
//	d(nums, numsSize, kr, (i + kr) % numsSize, count, r);
//
//}
//void rotate(int* nums, int numsSize, int k) {
//	//首先对k进行简单处理
//	int kr = k % numsSize;
//	int count = 0;
//	d(nums, numsSize, kr, 0, count, 0);
//}
//int main() {
//	int a[] = { -1,-100,3,99};
//	rotate(a, 4, 2);
//	int i;
//}
//顺序表

//#define Type int
//#define N 100
//struct SeqList
//{
//	Type a[N];
//	int size;
//};
//SeqList* SeqListInit() {
//	SeqList* list;
//	list = (SeqList*)malloc(sizeof(SeqList));
//	list->size = 0;
//	return list;
//} //初始化
//void SeqListDestory(SeqList* list) {
//	assert(list != NULL);
//	free(list);
//} //销毁
//void SeqlistPushBack(SeqList* list, Type x) {
//	assert(list->size+1<=N);
//	list->a[list->size] = x;
//	list->size++;
//}  //尾插
//void SeqlistPushFront(SeqList* list, Type x) {
//	assert((list->size) + 1 <= N);
//	for (int i = list->size; i>0; i--) {
//		list->a[i] = list->a[i - 1];
//	}
//	list->a[0] = x;
//	list->size++;
//}//头插
//void SeqlistPopBack(SeqList* list) {
//	assert(list != NULL);
//	list->size--;
//} //尾删
//void SeqlistPopFront(SeqList* list) {
//	assert(list != NULL);
//	for (int i = 0; i <list->size-1 ; i++) {
//		list->a[i] = list->a[i + 1];
//	}
//	list->size--;
//} //头删
//void SeqListPrint(SeqList* list) {
//	int count = 0;
//	for (int i = 0; i < list->size; i++) {
//		printf("%d ", list->a[i]);
//		count++;
//		if (count % 10 == 0) {
//			printf("\n");
//		}
//	}
//} //打印
//int SeqListFind(SeqList* list, Type x) {
//	for (int i = 0; i < list->size;i++) {
//		if (list->a[i] == x) {
//			return i+1;
//		}
//	}
//}//查找
//int main() {
//	SeqList* list = SeqListInit();
//	SeqlistPushFront(list,1);
//	SeqlistPushFront(list, 2);
//	SeqlistPushFront(list, 3);
//	SeqlistPushFront(list, 4);
//	SeqlistPushFront(list, 5);
//	printf("%d",SeqListFind(list, 4));
//	printf("\n");
//	SeqlistPushBack(list, 0);
//	SeqlistPushBack(list, -1);
//	SeqlistPushBack(list, -2);
//	SeqListPrint(list);
//	SeqListDestory(list);
//}
////单链表
////打印链表
//typedef int SLTDataType;
//
//typedef struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;//存放下一个结点的地址
//
//}SListNode;
//
//void SListPrint(SListNode* phead)
//{
//	SListNode* cur = phead;
//	while (cur)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//
////申请结点
//SListNode* SListBuyNode(SLTDataType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	if (newnode == NULL)
//	{
//		perror("malloc:");
//		exit(-1);
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//
////销毁链表
//void SListDestory(SListNode** pphead)
//{
//	assert(pphead);
//	SListNode* cur = *pphead;
//	while (cur)
//	{
//		SListNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	*pphead = NULL;
//}
//
////尾插
//void SListPushBack(SListNode** pphead, SLTDataType x)
//{
//	assert(pphead);
//	SListNode* newnode = SListBuyNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		SListNode* cur = *pphead;
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//	}
//}
//
////头插
//void SListPushFront(SListNode** pphead, SLTDataType x)
//{
//	assert(pphead);
//	SListNode* newnode = SListBuyNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
////尾删
//void SListPopBack(SListNode** pphead)
//{
//	assert(*pphead && pphead);
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//		return;
//	}
//	SListNode* cur = *pphead;
//	SListNode* next = (*pphead)->next;
//	while (next->next)
//	{
//		next = next->next;
//		cur = cur->next;
//	}
//	cur->next = NULL;
//	free(next);
//	next = NULL;
//}
//
////头删
//void SListPopFront(SListNode** pphead)
//{
//	assert(*pphead && pphead);
//	SListNode* next = (*pphead)->next;
//	free(*pphead);
//	*pphead = next;
//}
//
//
////查找
//SListNode* SListFind(SListNode* phead, SLTDataType x)
//{
//	while (phead)
//	{
//		if (phead->data == x)
//		{
//			return phead;
//		}
//		phead = phead->next;
//	}
//	return NULL;
//}
//
////指定位置后面插入
//void SListInsert(SListNode** pphead, SListNode* pos, SLTDataType x)
//{
//	assert(pphead && pos);
//	SListNode* newnode = SListBuyNode(x);
//	SListNode* next = pos->next;
//	pos->next = newnode;
//	newnode->next = next;
//
//}
//
////指定位置删除
//void SListErase(SListNode** pphead, SListNode* pos)
//{
//	assert(pphead && pos);
//	if (*pphead == pos)
//	{
//		*pphead = (*pphead)->next;
//		free(pos);
//		pos = NULL;
//	}
//	else
//	{
//		SListNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = pos->next;
//		free(pos);
//		pos = NULL;
//	}
//}
////静态链表交集实现
//// 先进行排序
////结构体定义
//#define MAX 50
//struct node
//{
//	int num;
//	int cur;
//};
//node* slistinit() {
//	node* slist = (node*)malloc(sizeof(node)*MAX);
//	//初始化头结点和备用区
//	slist[0].cur = -1;
//	for (int i = 1; i < MAX - 1; i++) {
//		slist[i].cur = i + 1;
//	}
//	slist[MAX - 1].cur = 0;
//	return slist;
//}//初始化
//
//int slistma(node*list) {
//	int i = list[1].cur;
//	list[1].cur = list[i].cur;
//	return i;
//}//分配空间
//void slistpushfront(node* slist, int x) {
//	int r = slist[0].cur;
//	int i = slistma(slist);
//	slist[i].num = x;
//	slist[i].cur = r;
//	slist[0].cur = i;
//}//头插操作
//node* f(node* s1, node* s2) {
//	//直接遍历
//	node *s3=slistinit();
//	if (s1 == NULL || s2 == NULL) {
//		return s3;
//	}
//	for (int i = s1[0].cur;i!=-1;i=s1[i].cur) {
//		for (int j = s2[0].cur; j!= -1; j = s2[j].cur) {
//			if (s1[i].num == s2[j].num) {
//				slistpushfront(s3, s2[j].num);
//			}
//		}
//	}
//	return s3;
//}//交集
//
//void slistprint(node* slist) {
//	for (int i = slist[0].cur; i != -1; i = slist[i].cur) {
//		printf("%d ", slist[i].num);
//	}
//}
//int main() {
//	node* slist1 = slistinit();
//	node* slist2 = slistinit();
//	slistpushfront(slist1, 11);
//	slistpushfront(slist1, 5);
//	slistpushfront(slist1, 8);
//	slistpushfront(slist1, 3);
//	slistprint(slist1);
//	printf("\n");
//	slistpushfront(slist2, 20);
//	slistpushfront(slist2, 11);
//	slistpushfront(slist2, 15);
//	slistpushfront(slist2, 3);
//	slistpushfront(slist2, 8);
//	slistpushfront(slist2, 6);
//	slistpushfront(slist2, 22);
//	slistprint(slist2);
//	printf("\n");
//	node* slist3 = f(slist1, slist2);
//	slistprint(slist3);
//}
////并集，单链表
////先合在一起再删去相同元素
//
//struct Node {
//	int data;
//	Node* next;
//};
//Node* creatlist() {
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->next = NULL;
//	return n;
//}
//void nodepushfront(Node* head, int x) {
//	Node *newnode= (Node*)malloc(sizeof(Node));
//	newnode->data = x;
//	newnode->next = head->next;
//	head->next = newnode;
//
//}
//void nodeerose(Node* head, Node* cur) {
//	Node* c = head;
//	while (c->next != cur) {
//		c = c->next;
//	}
//	c->next = cur->next;
//	free(cur);
//}
//void nodeprint(Node* head) {
//	Node* cur=head->next;
//	while (cur != NULL) {
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//Node* f(Node* l1, Node* l2) {
//	Node* cur=l1;
//	while (cur->next != NULL) {
//
//		cur = cur->next;
//	}
//	cur->next = l2;
//	//去掉相同元素
//	Node* cur1=l1;
//	Node* cur2;
//	while (cur1!=NULL) {
//		cur2 = cur1->next;
//		while (cur2!=NULL) {
//			if (cur2->data == cur1->data) {
//				Node* r = cur2;
//				cur2 = cur2->next;
//				nodeerose(l1, r);
//			}
//			else {
//				cur2 = cur2->next;
//			}
//		}
//		cur1 = cur1->next;
//	}
//	return l1;
//}
//int main() {
//	Node* list1 = creatlist();
//	Node* list2 = creatlist();
//	nodepushfront(list1, 11);
//	nodepushfront(list1, 5);
//	nodepushfront(list1, 8);
//	nodepushfront(list1, 3);
//	nodeprint(list1);
//	nodepushfront(list2, 20);
//	nodepushfront(list2, 11);
//	nodepushfront(list2, 15);
//	nodepushfront(list2, 3);
//	nodepushfront(list2, 8);
//	nodepushfront(list2, 6);
//	nodepushfront(list2, 22);
//	nodeprint(list2);
//	Node* s = f(list1, list2);
//	nodeprint(s);
//}
//对称差
//#define MAX 50
//struct list
//{
//	int size;
//	int a[MAX];
//};
////合成一个数组之后
////遍历放入新的数组
//list* creatlist() {
//	list* l = (list*)malloc(sizeof(list));
//	l->size = 0;
//	return l;
//}
//void listpushfront(list* l, int x) {
//	l->a[l->size++] = x;
//}
//list* f(list* l1, list* l2) {
//	for (int i = l1->size - 1 ,  j = 0; j < l2->size; i++, j++) {
//		l1->a[i] = l2->a[j];
//		l1->size++;
//	}
//	l2->size = 0;
//	int rell = 1;
//	for (int i = 0; i < l1->size;i++) {
//		rell = 1;
//		for (int j = 0; j < l1->size; j++) {
//
//				if (l1->a[i] == l1->a[j]) {
//					if (i != j) {
//						rell = 0;
//						break;
//					}
//					
//
//
//			}
//		}
//		if (rell == 1) {
//			l2->a[l2->size++] = l1->a[i];
//		}
//	}
//	return l2;
//}
//int main() {
//	list* l1 = creatlist();
//	list* l2 = creatlist();
//	listpushfront(l1, 11);
//	listpushfront(l1, 5);
//	listpushfront(l1, 8);
//	listpushfront(l1, 3);
//
//	listpushfront(l2, 20);
//	listpushfront(l2, 11);
//	listpushfront(l2, 15);
//	listpushfront(l2, 3);
//	listpushfront(l2, 8);
//	listpushfront(l2, 6);
//	listpushfront(l2, 22);
//	list* l3 = f(l1, l2);
//	for (int i = 0; i < l3->size-1; i++) {
//		printf("%d ", l3->a[i]);
//	}
//}

//计算天数
//struct mytime
//{
//	int y;
//	int m;
//	int d;
//};
//void theday() {
//	mytime a;
//
//	int sum = 0;
//	scanf_s("%d", &(a.y));
//	scanf_s("%d", &(a.m));
//	scanf_s("%d", &(a.d));
//	//计算闰年
//	int rell = 0;//非润
//	if (a.y % 4 == 0 && a.y % 100 != 0||a.y%400==0) {
//		rell = 1;
//	}
//	switch (a.m)
//	{
//	case 12:
//		sum += 30;
//	case 11:
//		sum += 31;
//	case 10:
//		sum += 30;
//	case 9:
//		sum += 31;
//	case 8:
//		sum += 31;
//	case 7:
//		sum += 30;
//	case 6:
//		sum += 31;
//	case 5:
//		sum += 30;
//	case 4:
//		sum += 31;
//	case 3:
//		if (rell == 0) {
//			sum += 28;
//		}
//		else {
//			sum += 29;
//		}
//	case 2:
//		sum += 31;
//	case 1:
//		sum += 0;
//	default:
//		break;
//	}
//	sum += a.d;
//	printf("%d", sum);
//}
//int main() {
//	theday();
//}
//文件读写
//动态数组
//冒泡排序
//void f() {
//	int m;
//	scanf_s("%d", &m);
//	int* a;
//	a = (int*)malloc(sizeof(int) * m);
//	for (int i = 0; i < m; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	//排序双指针
//	//记录排序次数
//	//冒泡排序
//	int r;//记录
//	for (int i = 0;i<m-1; i++) {
//		for (int j =0;j<m-i-1; j++) {//j是左指针
//			if (a[j] > a[j + 1]) {
//				r = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = r;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		printf("%d ", a[i]);
//	}
//}
//int main() {
//	f();
//}
//连接两个字符串
//void f() {
//	char a[10], b[10];
//	gets_s(a);
//	gets_s(b);
//	printf("%s", a);
//	printf("%s", b);
//}
//int main() {
//	f();
//}
//指针大小交换
//void chenge() {
//	
//	double a, b, c;
//	double* r;
//	scanf_s("%lf", &a);
//	scanf_s("%lf", &b);
//	scanf_s("%lf", &c);
//	double* max=&a, * mid=&b, * min=&c;
//	if (*max<*mid){
//		r = max;
//		max = mid;
//		mid = r;
//	}
//	if (*max <*min) {
//		r = max;
//		max = min;
//		min = max;
//	}
//	if (*mid < *min) {
//		r = mid;
//		mid = min;
//		min = r;
//	}
//	printf("%0.2lf %0.2f %0.3lf", a, b,c);
//}
//int main() {
//	chenge();
//}
 //实现kmp算法
//bool ju(char* m, char z[]) {
//	//首先建立next数组；
//	int next[20];
//	//赋值next
//	int max = 0;
//	int i=0;
//	while(i<6) {
//		if (i == 0) {
//			next[0] = max;
//			i++;
//		}else if (z[i] == z[max]) {
//			max++;
//			next[i] = max;
//			i++;
//		}
//		else {
//			if (max == 0) {
//				next[i] = 0;
//				i++;
//			}
//			else
//				max = next[max-1];
//
//		}
//	}
//	//开始比较
//	for (int i = 0, j = 0;i<9; j++,i++) {
//		if (m[i] != z[j]) {
//			//回溯指针i
//			if (j == 0) {
//
//			}else
//			j = next[j-1];
//		}
//		if (j == 5)return true;
//	}
//	
//	return false;
//}
//int main() {
//	char m[] = { 'q','e','c','a','b','c','a','b','b'};
//	char z[] = { 'a','b','c','a','b','b' };
//     bool t=ju(m, z);
//}
//对树插入操作
//建立新树
//struct BinTree
//{
//	int data;
//	BinTree* Left;
//	BinTree* Right;
//};
////插入
//BinTree Insert(int x,BinTree )
//实现文件读写
//int main()
//{
//	FILE* file;
//	errno_t err = fopen_s(&file,"D:/vsc++/practice/文本.txt", "w+");
//	if (file == NULL)
//	{
//		printf("open error!\n");
//		return 0;
//	}
//	char buf[1024] = { 0 };
//	fprintf(file, "aaa:%s", buf);
//	fscanf_s(file, "%s", buf);
//	fclose(file);
//	return 0;
//}
//typedef int SLTDataType;
//
//typedef struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;//存放下一个结点的地址
//
//}SListNode;
//
//void SListPrint(SListNode* phead)
//{
//	SListNode* cur = phead;
//	while (cur)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//
////申请结点
//SListNode* SListBuyNode(SLTDataType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	if (newnode == NULL)
//	{
//		perror("malloc:");
//		exit(-1);
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//
////销毁链表
//void SListDestory(SListNode** pphead)
//{
//	assert(pphead);
//	SListNode* cur = *pphead;
//	while (cur)
//	{
//		SListNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	*pphead = NULL;
//}
//
////尾插
//void SListPushBack(SListNode** pphead, SLTDataType x)
//{
//	assert(pphead);
//	SListNode* newnode = SListBuyNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}//如果为空创建
//	else
//	{
//		SListNode* cur = *pphead;
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//	}
//}
//
////头插
//void SListPushFront(SListNode** pphead, SLTDataType x)
//{
//	assert(pphead);
//	SListNode* newnode = SListBuyNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
////尾删
//void SListPopBack(SListNode** pphead)
//{
//	assert(*pphead && pphead);
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//		return;
//	}//仅一个数据
//	SListNode* cur = *pphead;
//	SListNode* next = (*pphead)->next;
//	while (next->next)
//	{
//		next = next->next;
//		cur = cur->next;
//	}
//	cur->next = NULL;
//	free(next);
//	next = NULL;
//}
//
////头删
//void SListPopFront(SListNode** pphead)
//{
//	assert(*pphead && pphead);
//	SListNode* next = (*pphead)->next;
//	free(*pphead);
//	*pphead = next;
//}
//
//
////查找
//SListNode* SListFind(SListNode* phead, SLTDataType x)
//{
//	while (phead)
//	{
//		if (phead->data == x)
//		{
//			return phead;
//		}
//		phead = phead->next;
//	}
//	return NULL;
//}
//
////指定位置后面插入
//void SListInsert(SListNode** pphead, SListNode* pos, SLTDataType x)
//{
//	assert(pphead && pos);
//	SListNode* newnode = SListBuyNode(x);
//	SListNode* next = pos->next;
//	pos->next = newnode;
//	newnode->next = next;
//
//}
//
////指定位置删除
//void SListErase(SListNode** pphead, SListNode* pos)
//{
//	assert(pphead && pos);
//	if (*pphead == pos)
//	{
//		*pphead = (*pphead)->next;
//		free(pos);
//		pos = NULL;
//	}//仅一个数据
//	else
//	{
//		SListNode* cur = *pphead;
//		while (cur->next != pos)
//		{
//			cur = cur->next;
//		}
//		cur->next = pos->next;
//		free(pos);
//		pos = NULL;
//	}
//}
////输出
////void SlistPrint(SListNode* head) {
////	SListNode* cur = head;
////	while (cur!= NULL) {
////		printf("%d ", cur->data);
////		cur = cur->next;
////
////	}
////
////}
// SListNode* mergeTwoLists(struct SListNode* list1, struct SListNode* list2) {
//	if (list1 == NULL)return list2;
//	if (list2 == NULL)return list1;
//	if (list1->data < list2->data) {
//		list1->next = mergeTwoLists(list1->next, list2);
//		return list1;
//	}
//	else
//	{
//		list2->next = mergeTwoLists(list2->next, list1);
//		return list2;
//	}
//}
//int main() {
//	SListNode* head1=NULL;
//	SListNode* head2 = NULL;
//	SListPushBack(&head1, 1);
//	SListPushBack(&head1, 2);
//	SListPushBack(&head1, 4);
//	SListPrint(head1);
//	SListPushBack(&head2, 1);
//	SListPushBack(&head2, 3);
//	SListPushBack(&head2, 4);
//	SListPrint(head2);
//	printf("\n");
//	SListPrint(mergeTwoLists(head1, head2));
//
//}
//静态链表交集实现
// 先进行排序
//结构体定义
//并集，单链表
//先合在一起再删去相同元素
//二叉树的链表结构
//#define ElementType int
//typedef TNode* Position;
//typedef Position BinTree;
//struct TNode
//{
//	ElementType Data;
//	BinTree Left;
//	BinTree Right;
//
//};
//typedef struct AVLNode* Position;
//typedef Position AVLTree; /* AVL树类型 */
//struct AVLNode {
//    ElementType Data; /* 结点数据 */
//    AVLTree Left;     /* 指向左子树 */
//    AVLTree Right;    /* 指向右子树 */
//    int Height;       /* 树高 */
//};
//
//int Max(int a, int b)
//{
//    return a > b ? a : b;
//}
//
//AVLTree SingleLeftRotation(AVLTree A)
//{ /* 注意：A必须有一个左子结点B */
//  /* 将A与B做左单旋，更新A与B的高度，返回新的根结点B */
//
//    AVLTree B = A->Left;
//    A->Left = B->Right;
//    B->Right = A;
//    A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
//    B->Height = Max(GetHeight(B->Left), A->Height) + 1;
//
//    return B;
//}
//
//AVLTree DoubleLeftRightRotation(AVLTree A)
//{ /* 注意：A必须有一个左子结点B，且B必须有一个右子结点C */
//  /* 将A、B与C做两次单旋，返回新的根结点C */
//
//    /* 将B与C做右单旋，C被返回 */
//    A->Left = SingleRightRotation(A->Left);
//    /* 将A与C做左单旋，C被返回 */
//    return SingleLeftRotation(A);
//}
//
///*************************************/
///* 对称的右单旋与右-左双旋请自己实现 */
///*************************************/
//
//AVLTree Insert(AVLTree T, ElementType X)
//{ /* 将X插入AVL树T中，并且返回调整后的AVL树 */
//    if (!T) { /* 若插入空树，则新建包含一个结点的树 */
//        T = (AVLTree)malloc(sizeof(struct AVLNode));
//        T->Data = X;
//        T->Height = 0;
//        T->Left = T->Right = NULL;
//    } /* if (插入空树) 结束 */
//
//    else if (X < T->Data) {
//        /* 插入T的左子树 */
//        T->Left = Insert(T->Left, X);
//        /* 如果需要左旋 */
//        if (GetHeight(T->Left) - GetHeight(T->Right) == 2)
//            if (X < T->Left->Data)
//                T = SingleLeftRotation(T);      /* 左单旋 */
//            else
//                T = DoubleLeftRightRotation(T); /* 左-右双旋 */
//    } /* else if (插入左子树) 结束 */
//
//    else if (X > T->Data) {
//        /* 插入T的右子树 */
//        T->Right = Insert(T->Right, X);
//        /* 如果需要右旋 */
//        if (GetHeight(T->Left) - GetHeight(T->Right) == -2)
//            if (X > T->Right->Data)
//                T = SingleRightRotation(T);     /* 右单旋 */
//            else
//                T = DoubleRightLeftRotation(T); /* 右-左双旋 */
//    } /* else if (插入右子树) 结束 */
//
//    /* else X == T->Data，无须插入 */
//
//    /* 别忘了更新树高 */
//    T->Height = Max(GetHeight(T->Left), GetHeight(T->Right)) + 1;
//
//    return T;
//}
//二搜索叉树基本操作实现
//定义结构体

struct Tree
{
	int data;
	Tree* left;
	Tree* right;
};
typedef Tree* SearchTree;
//初始化
//目的是将树销毁到原来状态
//定义时树是一个指针指向头
void TreeDesory(SearchTree T) {
	if (T != NULL) {
		TreeDesory(T->left);
		TreeDesory(T->right);
		free(&T);
	}
}
//查找循环
Tree* TreeFind1( SearchTree T,int x) {
	Tree* cur = T;
	while (cur != NULL) {
		if (x > cur->data) {
			cur = cur->right;
		}
		else if (x < cur->data) {
			cur = cur->left;
		}
		else {
			return cur;
		}
	}
	return NULL;
}
//递归实现查找
Tree* TreeFind2(SearchTree T, int x) {
	if (T == NULL) return NULL;
	if (x > T->data) {
		return TreeFind2(T->right, x);

	}
	if (x < T->data) {
		return TreeFind2(T->left, x);
	}
	if (x == T->data) {
		return T;
	}
}
//查找最大值递归实现
Tree* TreeMax(SearchTree T) {
	if (T == NULL)return NULL;
	if (T->right != NULL) {
		return T;
	}
}
Tree* TreeMin(SearchTree T) {
	if (T == NULL)return NULL;
	if (T->left != NULL) {
		return T;
	}
}
//查找最大值非递归实现
//这样传值是改变不了指针T的
Tree* TreeMax2(SearchTree T) {
	if (T == NULL)return NULL;
	Tree* cur=T;
	while (cur->right)
	{
		cur = cur->right;
	}return cur;
}
//插入元素，查找循环实现
//无法实现对根的初始化，因为只能改变指向地址的值并不能改变指向的地址
//开辟新地址实际上是改变指针指向位置
void TreeInsert1(SearchTree T,int x) {
	//先找到插入位置
	while (T != NULL) {
		
		if (T->data > x) {
			T = T->left;
		}
		else if (T->data < x) {
			T = T->right;
		}
	}
	T = new(Tree);
	T->data = x;
	T->left = NULL;
	T->right = NULL;
}
//递归实现
Tree* TreeInsert2(SearchTree T, int x) {
	//终止条件
	if (T == NULL) {
		//与上一个节点联系
		T = new(Tree);
		T->data = x;
		T->left = T->right = NULL;
		return T;
	}
	else {
		if (T->data > x) {
			T->left=TreeInsert2(T->left, x);
		}
		if (T->data < x) {
			T->right=TreeInsert2(T->right, x);
		}
	}
}
//删除操作
// 查找
// 叶节点删除                           
//仅一个子树的节点删除
//两个节点子树删除
//使用循环问题在如何删除节点后将之后节点联系起来
//void Delet(SearchTree T, int x) {
//	//查找被删除节点上一个元素
//	while (T->left->data == x || T->right->data == x) {
//
//	}
//	if (T != NULL) {
//		//叶节点
//		if (T->left == NULL && T->left == NULL) {
//			delete(T);
//		}else if(T->left!=NULL&&T->right!=NULL){
//			Tree* cur = T;
//			T = TreeMin(T);
//			Delet()
//			delete(cur);
//		}
//		else {
//			//一个子树
//			if (T->left != NULL) {
//				//连接左子树
//
//			}
//		}
//	}
//使用递归实现删除操作
Tree* TreeDlelet(SearchTree T,int x) {
	if (T == NULL) {
		printf("没找到");
	}
	if (T != NULL) {
		if (T->data > x) {
			T->left = TreeDlelet(T->left, x);
		}
		else if (T->data < x) {
			T->right = TreeDlelet(T->right, x);
		}
		else {
			//找到节点
			if (T->left != NULL && T->right != NULL) {
				Tree* cur = TreeMin(T);
				T->data == cur->data;
				delete(cur);
			}
			else {
				Tree* cur;
				if (T->left != NULL) {
					cur = T;
					T = T->left;
					delete(cur);
				}
				else if (T->right != NULL) {
					cur = T;
					T = T->right;
					delete(cur);
				}
				else {
					delete(T);
				}

			}

		}
		
	}
	return T;
}
void text1() {
	Tree* t = NULL;
	Tree* cur;
	/*TreeInsert1(t, 3);
	TreeInsert1(t, 2);
	TreeInsert1(t,7);
	TreeInsert1(t, 5);*/
	TreeInsert2(t, 4);
	TreeInsert2(t, 1);
	cur = TreeFind1(t, 4);
	printf("%d\n", cur->data);
	cur = TreeFind2(t, 5);
	printf("%d\n", cur->data);
}
void test2() {
	int x = 0;
	int* a = &x;
	int *p = a;
	a = (int *)malloc(sizeof(int));
	
}
//平衡二叉搜索树的插入