#include "��ͷ.h"
//ʵ��ͼ���ڽӾ����ʾ
//1ʵ�ַ�װ������ʾ
//2ʵ�ּ��׽���һ��ͼ
//�����������ͼ
// ����������ͼ
//ͼ�ṹ����
using namespace std;
#define Maxvertex 100
struct Graph
{
	int Nv;//������
	int Ne;//����
	int matrix[Maxvertex][Maxvertex];//0����û�б�
	int data[Maxvertex];//��Ŷ������ݣ�
};
//�����
struct Edge
{
	int v1, v2;
	//��ʾ��v1ָ��v2
	int weight;//����Ȩ��
};
//��ͼ��ʼ��
void CreatGraph(Graph &g,int nv) {
	
	g.Nv = nv;
	g.Ne = 0;
	//��ʼ������
	for (int i = 0; i < Maxvertex; i++) {
		for (int j = 0; j < Maxvertex; j++) {
			g.matrix[i][j] = 0;
			//��������Ĭ��
			//������Ҫȥѡ�����ﲻѡ��

		}
	}

}
//ʵ�ֱߵĲ���
void InitGraph(Graph& g, Edge e) {
	//������� ��Ȩ��
	//������һ
	//���������ͼ����Ҫ����Ӧ����Ԫ�ظ�ֵ
	g.matrix[e.v1][e.v2]=e.weight;
	g.Ne++;
}
//ʹ�ú�������һ������ͼ
void test01() {
	Graph g;
	int Nv,Ne;
	Edge e;
	cin >> Nv;
	CreatGraph(g, Nv);
	cin >> Ne;//��ȡ����
	//��ȡ�߻���Ȩ��
	for (int i = 0; i < Ne; i++) {
		cin >> e.v1 >> e.v2 >> e.weight;
		//����ͼ
		InitGraph(g, e);
	}
	cout << "dd";

}
//�򵥵ؽ���һ��ͼ
void test02() {
	int matrix[Maxvertex][Maxvertex],Nv,Ne,weight,v1,v2;
	cin >> Nv >> Ne;
	//��ʼ������
	for (int i = 0; i < Maxvertex; i++) {
		for (int j = 0; j < Maxvertex; j++) {
			matrix[i][j] = 0;
		}
	}
	//����ͼ��
	for (int i = 0; i < Ne; i++) {
		cin >> v1 >> v2 >> weight;
		matrix[v1][v2] = weight;
	}
	cout << "ii";

}
//�����ʽ
// Nv  Ne
// v1  v2 w
// .........
//
//����ʾ��
//8  4
//1  2  1
//3  4  2
//3  2  3
//3  7  7
//
int main() {
	test01();
	cout << "jie";
}