#include "标头.h"
#define Max 100
#define M 4
#define N 4
using namespace std;
//迷宫数组
int mg[M + 2][N + 2] = {
	{1,1,1,1,1,1},
	{1,0,0,0,1,1},
	{1,0,1,0,0,1},
	{1,0,0,0,1,1},
	{1,1,0,0,0,1},
	{1,1,1,1,1,1} };
//使用队列实现迷宫路径
//定义方格节点
struct Pane
{
	int x, y;
	int front;//上一个元素在队列下标
};
//定义队列
struct Q
{
	Pane data[Max];
	int front;
	int tail;
};
//初始化一个队列
Q* CreatQ() {
	Q *q = new(Q);
	q->front =q->tail= 0;
	return q;
}
//插
void PushQ(Q*q,Pane e) {
	q->data[q->tail++] = e;

}
//删除且将e改成下一个节点
void PopQ(Q* q,Pane&e) {
	q->front++;
	e = q->data[q->front];
}
//输出函数
//递归实现
void PrintQ(Q* q,Pane e) {
	//按照下标
	if (e.front == -1) {
		cout << "(" << e.x << "," << e.y << ")"<<"->";
	}
	else {
		PrintQ(q, q->data[e.front]);
		cout << "(" << e.x << "," << e.y << ")" << "->";
	}
		
}
//实现迷宫
bool test01(int xin, int yin, int xe, int ye) {
	Pane e;//当前方格
	e.x = xin;
	e.y = yin;
	e.front = -1;//代表入口
	Q* q = CreatQ();
	PushQ(q,e);
	//代表已经进队
	mg[e.x][e.y] = -1;
	//实现入队操作
	while (q->front!=q->tail) {
		//判断是否达到出口
		if (e.x == xe && e.y == ye) {
			//实现输出
			PrintQ(q, e);
			return true;//结束函数
		}
		//没有达到出口
		//对四个方向进行判断
		Pane en;//当前节点的下一位
		
		en.front = q->front;
		for (int i = 1; i < 5; i++) {
			en.x = e.x;
			en.y = e.y;
			switch (i)
			{case 1:
				en.x = e.x - 1;//左
				break;
			case 2:
				en.x = e.x + 1;//右
				break;
			case 3:
				en.y = e.y - 1;//上
				break;
			case 4:
				en.y = e.y + 1;//下
				break;
			default:
				break;
			}
			//判断并插入四周节点
			if(mg[en.x][en.y]==0) {
				PushQ(q, en);
				mg[en.x][en.y] = -1;
			}
			
		}
		//移出一个方格
		PopQ(q, e);
	}

}
int main() {
	test01(1, 1, 4, 4);
}