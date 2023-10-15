
#include "��ͷ.h"
//ƽ��������ĵ���
struct AVLNode
{
	int data;
	AVLNode* left;
	AVLNode* right;
	int height;
};
int Max(int a, int b) {
	if (a > b) {
		return a;
	}return b;
}
//��ȡ���ĸ߶�
//�ݹ�ʵ��
int Height(AVLNode* p) {
	if (p == NULL) {
		return 0;
	}
	else {
		return Max(Height(p->left), Height(p->right)) + 1;
	}
}
//������
//A�Ƿ�����
AVLNode* SingLeft(AVLNode* T) {
	AVLNode* t=T->left;
	T->left = t->right;
	t->right = T;
	//���¸߶�
	//����Ҫ���������䶯�ڵ�
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	t->height = Max(Height(t->left), Height(t->right)) + 1;
	return t;

}
//ʵ�ֵ�����
AVLNode* SingRight(AVLNode* T) {
	AVLNode* t = T->right;
	T->right = t->left;
	t->left = T;
	//���¸߶�
	//����Ҫ���������䶯�ڵ�
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	t->height = Max(Height(t->left), Height(t->right)) + 1;
	return t;
}
//ʵ���������,�ݹ�ʵ��
AVLNode* DoubleLR(AVLNode* T) {
	//����
	T->left=SingRight(T->left);
	//����
	return SingLeft(T);
}
//ʵ�����Һ���
AVLNode* DoubleRL(AVLNode* T) {
	//����
	T-> right= SingLeft(T->right);
	//����
	return SingRight(T);
}
//ʵ�ֲ�������ݹ�ʵ��
//ʹ��ʱҪ���ϸ���ͷ���
AVLNode* Insert(AVLNode* T, int x) {
	//�������Ϊ�մ����ڵ�
	//Ϊ�յ�������ֱ��ʹ�ò���
	if (T == NULL) {
		//�ݹ飬��������
		T = new(AVLNode);
		T->data = x;
		T->left = NULL;
		T->right = NULL;
		T->height = 1;
	}//Ѱ�ҽڵ㣬�ظ�����
	else if (x > T->data) {
		T->right = Insert(T->right, x);
		//����ڵ��
		//T����δ����
		//�жϸýڵ��Ƿ��Ƿ��ֽڵ�
		//��ʱ���������߶�һ������������
		if (Height(T->left) - Height(T->right) == -2) {
			//�ж����ҵ�����������˫��
			//��x�����ҽڵ���ұ߻������
			if (x > T->right->data) {
				//�������ҽڵ��ұ�
				T = SingRight(T);
			}
			else {
				T = DoubleRL(T);
			}
		}
	}
	else if (x < T->data) {
		T->left = Insert(T->left, x);
		//����ڵ��
		//T����δ����
		//�жϸýڵ��Ƿ��Ƿ��ֽڵ�
		//��ʱ���������߶�һ������������
		if (Height(T->left) - Height(T->right) == 2) {
			//�ж���������������˫��
			//��x������ڵ���ұ߻������
			if (x < T->left->data) {
				//��������ڵ����
				T = SingLeft(T);
			}
			else {
				T = DoubleLR(T);
			}
		}

	}
	//���¸߶�,�ظ�����
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	return T;
}
//�������
void f(AVLNode* T) {
	if (T == NULL)return;
	printf("%d ", T->data);
	f(T->left);
	f(T->right);
	
}
void test1() {
	AVLNode* T = NULL;
	T=Insert(T, 6);
	f(T);
	printf("\n");
	T =Insert(T, 5);
	f(T);
	printf("\n");
	T =Insert(T, 7);
	f(T);
	printf("\n");
	T =Insert(T, 4);
	f(T);
	printf("\n");
	T =Insert(T, 3);
	f(T);
	printf("\n");
	T =Insert(T, 1);
	f(T);
	printf("\n");
	T =Insert(T, 9);
	f(T);
	printf("\n");
	T = Insert(T, 8);
	f(T);
	printf("\n");
	//�������
	
}
int main() {
	test1();
}