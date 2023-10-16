#include "��ͷ.h"
struct HNode
{
	int* data;
	int size;
	int capacity;
};
#define Maxsize 100
#define Maxdata 1000 
//��ʼ��һ����
HNode* CreatHeap() {
	HNode* h = new(HNode);
	h->capacity = Maxsize;
	h->data = (int*)malloc(sizeof(int) * Maxsize);
	h->size = 0;//����ָ��ò���Ԫ��
	h->data[0] = Maxdata;
	return h;
}
//�ж��Ƿ���
bool IsFull(HNode* h) {
	return h->capacity == h->size;
}
//�������
//���ز���
bool Insert(HNode* h, int x) {
	if (IsFull) {
		return false;
	}
	else {
		//����
		int i;
		for ( i = ++h->size; i > 1 && h->data[i / 2] < x;i/=2) {
			h->data[i] = h->data[i / 2];//��С�ĸ��ڵ������ƶ�

		}
		//����
		h->data[i] == x;

		return true;
	}
}
//�жϿյĲ���
bool IsEmpty(HNode* h) {
	return h->size == 0;
}
//ɾ����������ɾ�������ֵ
int DeleteMax(HNode* h) {
	
	if (IsEmpty) {
		return -1;
	}
	else {
		int max = h->data[1];
		int maxch;
		int fa = 1;
		//ʹ�����Ԫ���滻(��ʵ��)���ֵ
		int tail = h->data[h->size--];
		//�������¹��˽ڵ�
		//�ҵ����Ҷ������ֵ
		// �����ڵ�û�ж���ʱ����tailΪ���ڵ��ѱ�Ϊ����
		for (; fa * 2 <= h->size; fa = maxch) {
			//��������
			maxch = fa * 2;
			if (maxch != h->size && h->data[maxch + 1] >= h->data[maxch]) {
				maxch++;
			}
			//�ѳ�Ϊ����
			if (h->data[maxch] <= tail) break;
			else h->data[fa] = h->data[maxch];
		}
		//��ֵ
		h->data[fa] = tail;
		return max;
	}
}
//�����ڵ㷽��ȥ����һ����
// �����Ѿ�����һ����ȫ����
//��ɾ�������Ƚ��񣬽�������һ�����ұ���һ������ôȥ����һ����
//ʹ����������ʵ��
void PercDown(HNode* h, int p) {
	int x = h->data[p];//ȡ�����ֵ
	int fa = p;
	int maxch;
	//�������¹��˽ڵ�
	//�ҵ����Ҷ������ֵ
	// �����ڵ�û�ж���ʱ����xΪ���ڵ��ѱ�Ϊ����
	for (; fa * 2 <= h->size; fa = maxch) {
		//��������
		maxch = fa * 2;
		if (maxch != h->size && h->data[maxch + 1] >= h->data[maxch]) {
			maxch++;
		}
		//�ѳ�Ϊ����
		if (h->data[maxch] <= x) break;
		else h->data[fa] = h->data[maxch];
	}
	//��ֵ
	h->data[fa] = x;
}
void BuildHeap( HNode*h)
{ /* ����H->Data[]�е�Ԫ�أ�ʹ�������ѵ�������  */
  /* �����������H->Size��Ԫ���Ѿ�����H->Data[]�� */

	int i;

	/* �����һ�����ĸ��ڵ㿪ʼ���������1 */
	for (i = h->size / 2; i > 0; i--)
		PercDown(h, i);
}