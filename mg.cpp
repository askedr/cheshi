#include "��ͷ.h"
#define Max 100
#define M 4
#define N 4
using namespace std;
//�Թ�����
int mg[M + 2][N + 2] = {
	{1,1,1,1,1,1},
	{1,0,0,0,1,1},
	{1,0,1,0,0,1},
	{1,0,0,0,1,1},
	{1,1,0,0,0,1},
	{1,1,1,1,1,1} };
//ʹ�ö���ʵ���Թ�·��
//���巽��ڵ�
struct Pane
{
	int x, y;
	int front;//��һ��Ԫ���ڶ����±�
};
//�������
struct Q
{
	Pane data[Max];
	int front;
	int tail;
};
//��ʼ��һ������
Q* CreatQ() {
	Q *q = new(Q);
	q->front =q->tail= 0;
	return q;
}
//��
void PushQ(Q*q,Pane e) {
	q->data[q->tail++] = e;

}
//ɾ���ҽ�e�ĳ���һ���ڵ�
void PopQ(Q* q,Pane&e) {
	q->front++;
	e = q->data[q->front];
}
//�������
//�ݹ�ʵ��
void PrintQ(Q* q,Pane e) {
	//�����±�
	if (e.front == -1) {
		cout << "(" << e.x << "," << e.y << ")"<<"->";
	}
	else {
		PrintQ(q, q->data[e.front]);
		cout << "(" << e.x << "," << e.y << ")" << "->";
	}
		
}
//ʵ���Թ�
bool test01(int xin, int yin, int xe, int ye) {
	Pane e;//��ǰ����
	e.x = xin;
	e.y = yin;
	e.front = -1;//�������
	Q* q = CreatQ();
	PushQ(q,e);
	//�����Ѿ�����
	mg[e.x][e.y] = -1;
	//ʵ����Ӳ���
	while (q->front!=q->tail) {
		//�ж��Ƿ�ﵽ����
		if (e.x == xe && e.y == ye) {
			//ʵ�����
			PrintQ(q, e);
			return true;//��������
		}
		//û�дﵽ����
		//���ĸ���������ж�
		Pane en;//��ǰ�ڵ����һλ
		
		en.front = q->front;
		for (int i = 1; i < 5; i++) {
			en.x = e.x;
			en.y = e.y;
			switch (i)
			{case 1:
				en.x = e.x - 1;//��
				break;
			case 2:
				en.x = e.x + 1;//��
				break;
			case 3:
				en.y = e.y - 1;//��
				break;
			case 4:
				en.y = e.y + 1;//��
				break;
			default:
				break;
			}
			//�жϲ��������ܽڵ�
			if(mg[en.x][en.y]==0) {
				PushQ(q, en);
				mg[en.x][en.y] = -1;
			}
			
		}
		//�Ƴ�һ������
		PopQ(q, e);
	}

}
int main() {
	test01(1, 1, 4, 4);
}