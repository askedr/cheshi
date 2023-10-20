#include "��ͷ.h"
using namespace std;
//���ϳ��ڽ����ϵ����ʱʹ��
//���ϵĶ���Ͳ���
// ���ϼ���ʽ
//��������
#define MaxSet 50
#define Maxinput 50
typedef int Set;
//��ʼ��һ������
Set* CreatSet() {
	Set s[MaxSet];
	//��ʼ��
	for (int i = 0; i < MaxSet; i++) {
		s[i] = -1;
	}
	//��ʼ���Ǹ��ڵ�
	return s;
}
//���Ȳ��飨�߶ȣ�
//ʵ�ֺϲ�����
//���ڵ��ŵ��Ǹ߶ȵĸ���
void Union1(Set* s, int root1, int root2) {
	//Ĭ���Ǹ�
	// ʹ��ʱ��findǶ��ʹ��
	//�����߽��бȽ�
	if (s[root1] > s[root2]) {
		s[root1] = root2;
	}
	else if(s[root1] < s[root2]){
		s[root2] = root1;
	}//������������㲢һ�������Ҹ�������
	else {
		s[root1] = root2;
		s[root2]--;
	}
}
//ʵ�ֲ���
//������·��ѹ��
//����һ��ĳһ��Ԫ�ظ��ڵ�
int Find1(int x, Set* s) {
	for (; s[x] >= 0; x = s[x]);
	return x;
}
//������ʵ�ְ���ģ����(·��ѹ��)
//���ڵ��ǹ�ģ�ĸ���
void Union2(Set* s, int root1, int root2) {
	//Ĭ���Ǹ�
	// ʹ��ʱ��find2Ƕ��ʹ��
	//�Թ�ģ���бȽ�
	if (s[root1] > s[root2]) {
		//���߹�ģ���󣬽�ǰ�߲�����߲��Ҹ��Ĺ�ģ���밴�Ȳ��鲻ͬ��
		s[root2] += s[root1];
		s[root1] = root2;

	}
	else if (s[root1] < s[root2]) {
		s[root1] += s[root2];
		s[root2] = root1;
	}//�����ģ�����㲢һ�������Ҹ��Ĺ�ģ
	else {
		s[root2] += s[root1];
		s[root1] = root2;
	}
}
int Find2(int x, Set* s) {
	//ʵ��·��ѹ��
	if (s[x] < 0) {
		return x;
	}
	return s[x]=Find2(s[x], s);
}
//�������뷽��

void test01() {
	int s1[] = { 1,2,3,4 };
	int s2[] = { 11,12,13,14 };
	Set* s = CreatSet();
	//ʹ�úϲ��ķ�����������
	for (int i = 1; i < sizeof(s1) / sizeof(int); i++)
		Union1(s, Find1(s1[0],s), s1[i]);
	for (int i = 1; i < sizeof(s2) / sizeof(int); i++)
		Union2(s, Find2(s2[0],s), s2[i]);
	//�ϲ���������
	//��Ϊһ���ǰ��߶ȴ�����һ���ǰ���ģ���������Ժϲ�����
	//�Ժ��ٲ��԰�
}
void test02() {
	int s1[] = { 1,2,3,4 };
	int s2[] = { 11,12,13,14 };
	cout << sizeof(s1) / sizeof(int) << "  " << sizeof(s2) / sizeof(int)<<endl;
}
int main() {
	test01();

}