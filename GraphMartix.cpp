#include "标头.h"
//实现图的邻接矩阵表示
//1实现分装函数表示
//2实现简易建立一个图
//分有相和无相图
// 这里是有向图
//图结构定义
using namespace std;
#define Maxvertex 100
struct Graph
{
	int Nv;//顶点数
	int Ne;//边数
	int matrix[Maxvertex][Maxvertex];//0代表没有边
	int data[Maxvertex];//存放顶点数据；
};
//定义边
struct Edge
{
	int v1, v2;
	//表示由v1指向v2
	int weight;//代表权重
};
//对图初始化
void CreatGraph(Graph &g,int nv) {
	
	g.Nv = nv;
	g.Ne = 0;
	//初始化矩阵
	for (int i = 0; i < Maxvertex; i++) {
		for (int j = 0; j < Maxvertex; j++) {
			g.matrix[i][j] = 0;
			//顶点数据默认
			//根据需要去选择这里不选了

		}
	}

}
//实现边的插入
void InitGraph(Graph& g, Edge e) {
	//放入矩阵 赋权重
	//边数加一
	//如果是无向图还需要将对应矩阵元素赋值
	g.matrix[e.v1][e.v2]=e.weight;
	g.Ne++;
}
//使用函数建立一个有相图
void test01() {
	Graph g;
	int Nv,Ne;
	Edge e;
	cin >> Nv;
	CreatGraph(g, Nv);
	cin >> Ne;//读取边数
	//读取边还有权重
	for (int i = 0; i < Ne; i++) {
		cin >> e.v1 >> e.v2 >> e.weight;
		//插入图
		InitGraph(g, e);
	}
	cout << "dd";

}
//简单地建立一个图
void test02() {
	int matrix[Maxvertex][Maxvertex],Nv,Ne,weight,v1,v2;
	cin >> Nv >> Ne;
	//初始化矩阵
	for (int i = 0; i < Maxvertex; i++) {
		for (int j = 0; j < Maxvertex; j++) {
			matrix[i][j] = 0;
		}
	}
	//插入图中
	for (int i = 0; i < Ne; i++) {
		cin >> v1 >> v2 >> weight;
		matrix[v1][v2] = weight;
	}
	cout << "ii";

}
//输入格式
// Nv  Ne
// v1  v2 w
// .........
//
//输入示例
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