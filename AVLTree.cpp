
#include "标头.h"
//平衡二叉树的调整
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
//获取树的高度
//递归实现
int Height(AVLNode* p) {
	if (p == NULL) {
		return 0;
	}
	else {
		return Max(Height(p->left), Height(p->right)) + 1;
	}
}
//单左旋
//A是发现者
AVLNode* SingLeft(AVLNode* T) {
	AVLNode* t=T->left;
	T->left = t->right;
	t->right = T;
	//更新高度
	//仅需要更新子树变动节点
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	t->height = Max(Height(t->left), Height(t->right)) + 1;
	return t;

}
//实现单右旋
AVLNode* SingRight(AVLNode* T) {
	AVLNode* t = T->right;
	T->right = t->left;
	t->left = T;
	//更新高度
	//仅需要更新子树变动节点
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	t->height = Max(Height(t->left), Height(t->right)) + 1;
	return t;
}
//实现先左后右,递归实现
AVLNode* DoubleLR(AVLNode* T) {
	//右旋
	T->left=SingRight(T->left);
	//左旋
	return SingLeft(T);
}
//实现先右后左
AVLNode* DoubleRL(AVLNode* T) {
	//左旋
	T-> right= SingLeft(T->right);
	//右旋
	return SingRight(T);
}
//实现插入操作递归实现
//使用时要不断更新头结点
AVLNode* Insert(AVLNode* T, int x) {
	//首先如果为空创建节点
	//为空的树不能直接使用插入
	if (T == NULL) {
		//递归，结束条件
		T = new(AVLNode);
		T->data = x;
		T->left = NULL;
		T->right = NULL;
		T->height = 1;
	}//寻找节点，重复操作
	else if (x > T->data) {
		T->right = Insert(T->right, x);
		//插入节点后
		//T树高未更新
		//判断该节点是否是发现节点
		//这时候右子树高度一定大于左子树
		if (Height(T->left) - Height(T->right) == -2) {
			//判断是右单旋还是右左双旋
			//看x是在右节点的右边还是左边
			if (x > T->right->data) {
				//这是在右节点右边
				T = SingRight(T);
			}
			else {
				T = DoubleRL(T);
			}
		}
	}
	else if (x < T->data) {
		T->left = Insert(T->left, x);
		//插入节点后
		//T树高未更新
		//判断该节点是否是发现节点
		//这时候左子树高度一定大于右子树
		if (Height(T->left) - Height(T->right) == 2) {
			//判断是左单旋还是左右双旋
			//看x是在左节点的右边还是左边
			if (x < T->left->data) {
				//这是在左节点左边
				T = SingLeft(T);
			}
			else {
				T = DoubleLR(T);
			}
		}

	}
	//更新高度,重复操作
	T->height = Max(Height(T->left), Height(T->right)) + 1;
	return T;
}
//先序遍历
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
	//先序遍历
	
}
int main() {
	test1();
}