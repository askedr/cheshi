#include "标头.h"
using namespace std;
class Trie {
	//字典树实现字符串的插入删除
private:
	//类的嵌套
	bool IsEnd;
	Trie* next[26];
public:
	Trie() {
		IsEnd = false;
		memset(next, 0, sizeof(next));//全是零相当于空
	}
	//插入操作
	void insert(string word) {
		Trie* node = this;
		for (char c : word) {
			if (node->next[c - 'a'] == NULL) {
				node->next[c - 'a'] = new(Trie);
			}
			node = node->next[c - 'a'];
		}
		node->IsEnd = true;
	}
	//查找
	bool search(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return node->IsEnd;
	}
	//查找前缀
	bool startsWith(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return true;
	}

};
//返回袋子最少的
//首先使用几个8类型的袋子
//如果分派失败
// 回退一个8类型袋子
// 使6类型的袋子不循环
// 在尝试时可以提前退出
// 剩余大于24停止，最大公倍数
// 
// 
//
//绳子覆盖节点问题
class MyClass
{
public:
	//默认输入
	
	int* input() {

	}
	int maxcover(int n,int*arr) {
		int asize = sizeof(arr) / sizeof(int);
		int maxcount = 1;
		for (int l = 0; l < asize; l++) {
			int count = 1;
			int r = l;
			while (1) {
				if (arr[r + 1] - arr[l] > n) {
					break;
				}
				else {
					count++;
					r = r + 1;
				}
			}
			if (count > maxcount) {
				maxcount = count;

			}
		}
		return maxcount;
}
 string win(int n) {
	 if (n < 5) {
		 return (n == 1 || n == 3) ? "后手": "先手";

	 }
	 //递归
	 int base = 1;//先手
	 while (base<=n) {
		 //先手吃掉base分
	 }
	}
 //装苹果问题
 //返回最小袋子数
 int putappdle(int  apple) {
	 //去排除特殊情况
	 if (apple < 6) {
		 return -1;
	 }
	 if (apple == 7) {
		 return -1;
	 }
	 int d8 = apple / 8;
	 int rest = apple - 8 * d8;
	 int d6;
	 for (; rest < 24 && d8>=0 ; d8--) {
		 rest= apple - 8 * d8;
		 if (rest % 6 == 0) {
			 return d8+rest/6;

		 }


	 }
	 return -1;
 }
 //返回最小袋子数
 int apple02(int apple) {
	 //规律从18开始每十个为一个循环
	 if (apple % 2 == 1)return -1;
	 if (apple < 18) {
		 if (apple < 6|| apple == 7)return -1;
		 
		 if (apple == 6 )return 1;
		 if (apple == 12)return 2;
		 if (apple == 8)return 1;
		 if (apple == 16)return 2;
	 }
	 return (apple - 18) / 8 + 3;
	 

 }
 string win1(int n) {
	 //首先排除特殊情况
	 //规律从开始遵循先后先先后
	 if (n == 1)return"先手";
	 if (n == 2)return "后手";
	 if (n == 3)return "先手";
	 if (n == 4)return "先手";

	 int base = 1;
	 int test;
	 while (base<=n) {
		 test = n - base;
		 if (win1(test) == "后手") {
			 return "先手";
		 }
		 else {
				 base = base * 4;
		 }

	 }
	 return "后手";
 }
 string win02(int n) {
	 if (n % 5 == 0 || n % 5 == 2)return "后手";
	 return "先手";
 }
 //爬楼梯递归实现
 int count = 0;
 
 int ClimbStairs(int n) {
	 count = 0;
	 return count;
	 

 }
 int HelpClimaStairs(int n) {
	 //差值是上上个方法数
	 if (n == 1) {
		 count++;
		 return 1;
	 }
	 if (n == 2) {
		 return 2;
	 }
	 if (n == 3) {
		 return 3;
	 }
	 return HelpClimaStairs(n - 1)+ HelpClimaStairs(n - 2);
 }
 //网格深度优先搜索的基本框架
 //手先遍历四周
 //判断遍历结束条件
 //记录是否已经遍历过
 //网格遍历基本框架
 bool inArea(vector<vector<int>>grid, int r, int c) {
	 //判断是否在网格中
	 return 0 <= r && r < grid.size() && 0 <= c && grid[0].size();
 }
 void dfs(vector<vector<int>>grid, int r, int c) {
	 if (!inArea(grid, r, c))return;
	 if (grid[r][c] !=1) {
		 return;
	 }
	 else {
		 grid[r][c] = 2;
		 //遍历四周节点
		 dfs(grid, r-1, c);
		 dfs(grid, r +1, c);
		 dfs(grid, r, c-1);
		 dfs(grid, r, c+1);

	 }
 }
 //完全平方数
 //不是一个最优解
 int all(int n, vector<int>v) {
	 if (n == 0)return 0;
	 int min = 1;
	 vector<int>c;
	 //记录当前方法最小值
	 for (int i = 0; i < v.size(); i++) {
	 for (int i = v.size()-1; i >= 0; i--) {
	 }
		 /*if (v[i] <= n) {
			 if (min > all(n - v[i], v)) {
				 min=
			 }
		 }*/
	 }
	

 }
 //零钱
 int coinChange(vector<int>& coins, int amount) {
	 vector<int>v(amount+1);
	 //等于
	 v[0] = 0;
	 //首先赋值零钱对应的位置
	 for (int j = 0; j < coins.size(); j++) {
		 v[coins[j]] = 1;
	 }
	 for (int i = 1; i <= amount; i++) {
		 //遍历零钱数组
		 if (v[i] == 1) {
			 continue;
		 }
		int minn = INT_MAX;
		bool ju = false;
		 for (int j = 0;j<coins.size();j++ ){
			 if (i - coins[j] <= 0) {
				 continue;
			 }//超出
			 if (v[i - coins[j]] == -1) {
				 continue;
			 }
			 ju = true;
			 minn = min(minn, v[i - coins[j]]);//正常情况
		 }
		 if (ju)v[i] = minn+1;
		 else v[i] =-1;

	 }
	 return v[amount];
 }
 //单词拼接
 bool wordBreak(string s, vector<string>& wordDict) {
	 //拆分成一个子问题
	 //直接遍历,去找第一个单词
	 string current;

	 
 }
 bool inArr(vector<vector<int>>& grid, int x, int y) {
	 return 0 <= x && x < grid[0].size() && 0 <= y && y < grid.size();
 }
 int orangesRotting(vector<vector<int>>& grid) {
	 int mine = -1;
	 int count = 0;
	 queue<pair<int, int>>q;//用于广度优先
	 //找到全部腐烂
	 for (int i = 0; i < grid[0].size(); i++) {
		 for (int j = 0; j < grid.size(); j++) {
			 if (grid[i][j] == 2) {
				 q.push({ i,j });

			 }
			 if (grid[i][j] == 1) {
				 count++;

			 }
		 }
	 }
	 while (!q.empty()) {
		 int size = q.size();
		 mine++;
		 while (size > 0) {
			 pair<int, int>current;
			 current = q.front();
			 q.pop();
			 size--;
			 //进行上下左右的搜索
			 if (inArr(grid, current.first - 1, current.second)) {
				 if (grid[current.first - 1][current.second] == 1) {
					 count--;
					 grid[current.first - 1][current.second] = 2;//腐烂
					 q.push({ current.first - 1,current.second });

				 }
			 }
			 if (inArr(grid, current.first + 1, current.second)) {
				 if (grid[current.first + 1][current.second] == 1) {
					 count--;
					 grid[current.first + 1][current.second] = 2;//腐烂
					 q.push({ current.first + 1,current.second });

				 }


			 }
			 if (inArr(grid, current.first, current.second - 1)) {
				 if (grid[current.first][current.second - 1] == 1) {
					 count--;
					 grid[current.first][current.second - 1] = 2;//腐烂
					 q.push({ current.first,current.second - 1 });

				 }


			 }
			 if (inArr(grid, current.first, current.second + 1)) {
				 if (grid[current.first][current.second + 1] == 1) {
					 count--;
					 grid[current.first][current.second + 1] = 2;//腐烂
					 q.push({ current.first,current.second + 1 });

				 }


			 }

		 }
	 }
	 if (count == 0)return mine;
	 return -1;

 }
 //返回最小高度树
 //根节点一旦确定，最小高度树确定
 vector<int>r;
 int findMinHeightTreeshelp(int ver,vector<vector<int>> ve) {
	 
	 //求高度
	 //因为是树所以只用判断是不是从上一个节点下来的就行
	 int maxx = 0;
	 r[ver] = 1;
	 for (int i = 0; i < ve[ver].size(); i++) {
		 if (r[ve[ver][i]] == 0) {
			 maxx = max(findMinHeightTreeshelp(ve[ver][i], ve), maxx);
		 }
	 }
	 return maxx + 1;
 }
 vector<int> findMinHeightTree(int n, vector<vector<int>>& edges) {
	 vector<int>re;//存放输出
	 //收录成玲姐链表形式
	 vector<vector<int>> ve(n);
	 //注意遍历的顺序
	 for (int i = 0; i < edges.size(); i++) {
		 //赋值
		 ve[edges[i][0]].push_back(edges[i][1]);
		 ve[edges[i][1]].push_back(edges[i][0]);
	 }
	 //遍历每一个节点依次当做根
	 //再去求高度
	 //
	 vector<int>jilu;
	 int minn = INT_MAX;
	 for (int i = 0; i < n; i++) {
		 r.clear();
		 r.resize(n, 0);
		 jilu.push_back(findMinHeightTreeshelp(i, ve));
	 }
	 for (int i = 0; i < n; i++) {
		 if (minn > jilu[i]) {
			 re.clear();
			 minn = jilu[i];
			 re.push_back(i);
			 

		 }
		 else if (minn == jilu[i]) {
			 re.push_back(i);

		 }
	 }
	 return re;
	 

 }


 //BFS
 //岛屿数量广度优先
 //判断是否越界
 bool inArr(vector<vector<char>>& grid,int i,int j) {
	 return 0 <= i && i < grid.size() && 0 <= j && j < grid[0].size();
 }
 int numIslands(vector<vector<char>>& grid) {
	 //对每一个未被收录且是陆地的节点进行广度优先并且记录数量
	 int bfs_i[] = { 0,0,1,-1 };
	 int bfs_j[] = { 1,-1,0,0 };
	 int num = 0;
	 queue<pair<int, int>>q;
	 for (int i = 0; i < grid.size(); i++) {
		 for (int j = 0; j < grid[0].size(); j++) {
			 if (grid[i][j] == '1') {
				 grid[i][j] = '0';
				 q.push({ i,j });
				 num++;

			 }
			 //BFS
			 while (!q.empty()) {
				 pair<int, int>current;
				 current=q.front();
				 q.pop();
				 //遍历四周使用一个数组使用循环
				 for (int n = 0; n < 4; n++) {
					 pair<int, int>curnext = current;
					 curnext.first += bfs_i[n];
					 curnext.second += bfs_j[n];
					 //判断是否越界
					 if (inArr(grid,curnext.first,curnext.second)&&grid[curnext.first][curnext.second]=='1') {
						 grid[curnext.first][curnext.second] = '0';
						 q.push(curnext);

					 }
					 
				 }

			 }
		 }
	 }
	 return num;
 }

 
 //最小生成树拓补排序求法：不断去掉度数为一的节点
 vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
	 //首先转换成一个邻接矩阵
	 vector<vector<int>>neighbor;
	 neighbor.resize(n);
	 vector<int>degree;
	 int degreesize = n;
	 degree.resize(n, 0);
	 for (int i = 0; i < edges.size(); i++) {
		 neighbor[edges[i][1]].push_back(edges[i][0]);
		 neighbor[edges[i][0]].push_back(edges[i][1]);
		 degree[edges[i][1]]++;
		 degree[edges[i][0]]++;
	 }
	 //拿出度数为零的节点标记为-1
	 //不能立即更改广度优先
	 queue<int>vertex;
	 if (degreesize == 2) {
		 return { 0,1 };
	 }
	 if (degreesize == 1) {
		 return { 0 };
	 }
	 for (int i = 0; i < degree.size(); i++) {
		 if (degree[i] == 1) {
			 vertex.push(i);
			 degree[i] = -1;
			 degreesize--;
		 }
	 }
	 while (degreesize>2) {
		 //加上层次
		 int size = vertex.size();
		 while (size>0) {
			 int current = vertex.front();
			 vertex.pop();
			 size--;
			 //更新入度
			 for (int i = 0; i < neighbor[current].size(); i++) {
				 degree[neighbor[current][i]]--;
				 if (degree[neighbor[current][i]] == 1) {
					 degreesize--;
					 vertex.push(neighbor[current][i]);
					 degree[neighbor[current][i]] = -1;
				 }
			 }
		 }

	 }
	 if (degreesize == 2) {
		 int a=-1;
		 int b=-1;
		 for (int i = 0; i < degree.size(); i++) {
			 if (degree[i] > 0) {
				 if (a == -1)a = i;
				 else b = i;
			 }
		 }
		 return{ a,b };
	 }
	 else if(degreesize==1){
		 int a = -1;
		 for (int i = 0; i < degree.size(); i++) {
			 if (degree[i] > -1) {
				 a = i;
		
			 }
		 }
		 return { a };
	 }
 }
 //矩阵最大递增路径
 //寻找最大路径记录在一个数组中如果有路径超过他再去更新
 //路径不能重复
 //对每一个节点求最大路径
 //深度优先
 //新建一个容器存放每个元素最大路径，大小还有不能重复
 //证明了不可能有重复
 //
 bool PassIt(int i, int j,int nexti,int nextj,vector<vector<int>>maxtrix) {
	 //在里面并且比原先大
	 if (0 <= nexti && nexti < maxtrix.size() && 0 <= nextj && nextj < maxtrix[0].size()) {//没有出界
		 if (maxtrix[i][j] < maxtrix[nexti][nextj]) {
			 return true;
		 }
	 }
	 return false;
 }
 void dfs(int i, int j, vector<vector<int>>maxtrix, vector<vector<int>>& maxpath,vector<vector<bool>>val) {
	 //一次深度优先能确定所有最大路径
	 val[i][j] = true;
	 //遍历四周
	 int ne_i[] = { 0,0,1,-1 };
	 int ne_j[] = { 1,-1,0,0 };
	 int maxx = 1;
	 for (int c = 0; c < 4; c++) {
		 if (PassIt(i,j,i + ne_i[c], j + ne_j[c],maxtrix)) {
			 if (maxpath[i + ne_i[c]][j + ne_j[c]] == 0) {
				 //未被收录
				 maxpath[i + ne_i[c]][j + ne_j[c]] = 1;
				 dfs(i + ne_i[c], j + ne_j[c], maxtrix, maxpath, val);
				 //已经收录
				 maxx = max(maxpath[i + ne_i[c]][j + ne_j[c]] + 1, maxx);//上下左右最大值
			 }
			 else {
				 maxx = max(maxpath[i + ne_i[c]][j + ne_j[c]] + 1, maxx);//上下左右最大值
			 }
		 }
	 }
	 maxpath[i][j] = maxx;

 }
 void longpath(int i, int j, vector<vector<int>>matrix, vector<vector<int>>& maxpath) {
	 //深度优先
	 //记录收录节点
	 vector<vector<bool>>val;
	 vector<bool>pat;
	 pat.resize(matrix[0].size(), false);
	 val.resize(matrix.size(), pat);
	 pat.clear();
	 vector<bool>().swap(pat);
	 //深度优先
	 dfs(i, j, matrix, maxpath, val);//已经建立起最大路径数组

 }
 int longestIncreasingPath(vector<vector<int>>& matrix) {
	 vector<vector<int>>maxpath;//存放最大路径不等于0代表已经被收录
	 vector<int>pat;
	 pat.resize(matrix[0].size(), 0);
	 maxpath.resize(matrix.size(),pat);
	 pat.clear();
	 vector<int>().swap(pat);
	 //遍历容器
	 int maxx = 0;
	 for (int i = 0; i < matrix.size(); i++) {
		 for (int j = 0; j < matrix[0].size(); j++) {
			 longpath(i, j, matrix, maxpath);
			 maxx = max(maxx, maxpath[i][j]);
		 }
	 }
	 return maxx;

 }
 private:
 };


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 class Solution {
 public:
	 //分清根左还是左根建立树
	 //输入建立树返回节点
	 TreeNode* Helpbuild(int agin, int end,vector<int>& preorder, vector<int>& inorder) {
		 //不够对称
		 if (agin == end) {
			 //没有子树
			 TreeNode* t = new(TreeNode);
			 t->val = preorder[agin];
			 return t;
		 }
		 if (end < agin) {
			 //没有根
			 return NULL;
		 }
		 TreeNode* t = new(TreeNode);
		 t->val = preorder[agin];
		 //寻找左右还有根
		 int i = agin+1;
		 int j = agin;
		 bool it = true;
		 if (preorder[i] != inorder[j]) {
			 //没有左树
			 it = false;
		 }
		 else {
			 for (; i<preorder.size() && preorder[i] == inorder[j]; j++, i++) {

			 }
		 }
		 if (i <= end) {
			 //有右树
			 t->right = Helpbuild(i, end, preorder, inorder);
		 }
		 //如果一开始就不相等代表没有左树
		 if (it == true) {
			 t->left = Helpbuild(agin + 1, i - 1, preorder, inorder);
		 }//建立右树
		//建立根节点
			 return t;
	 }
	 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		 //递归？
		 return Helpbuild(0, preorder.size()-1,preorder, inorder);
		 //找这两个数组相同前缀
		 //int i = 0;
		 //int j = 0;
		 //
		 //for (; i < preorder.size();i++) {
			// //新建一个节点
			// TreeNode* t=new(TreeNode);
			// t->val = preorder[i];
			// for (j = i; preorder[i] != inorder[j]; i++) {//建立一个左树
			//	 TreeNode* t2 = new(TreeNode);
			//	 t2->val = preorder[i];

			// }
		 //}

	 }
	 static constexpr int dies[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
	 int rows, colums;
	 int longgestIncreasingPath(vector<vector<int>>& matrix) {
		 vector<int>d;
		 
	 }
	 int dfs(vector<vector<int>>& matrix, int row, int column, vector<vector<int>>& memo) {

	 }
	 ////通过矩阵相乘写斐波那契
	 ////矩阵相乘
	 ////
	 //int fib(int n) {
		// if (n == 0)return 0;
		// if (n == 1)return 1;
		// vector<vector<int>>f(2, vector<int>(1));
		// f[0][0] = 0;
		// f[1][0] = 1;
		// vector < vector<int>>action(2, vector<int>(2));
		// action[0][0] = 1;
		// action[0][1] = 1;
		// action[1][0] = 1;
		// action[1][1] = 0;
		// vector<vector<int>>end = matrix(n,action);
		// return pow(end,f);
	 //}
	 //int pow(vector<vector<int>>end, vector<vector<int>>f) {
		// return end[0][0] * f[0][0] + end[0][1] * f[1][0];

	 //}
	 //vector<vector<int>> cheng(vector<vector<int>> a, vector<vector<int>> b) {
		// //两个矩阵相乘
		// vector<vector<int>> v(2,vector<int>(2,0));
		// v[0][0] = b[0][0] * a[0][0] + b[1][0] * a[0][1];
		// v[0][1] = b[0][1] * a[0][0] + b[1][1] * a[0][1];
		// v[1][0] = b[0][0] * a[1][0] + b[1][0] * a[1][1];
		// v[1][1] = b[0][1] * a[1][0] + b[1][1] * a[1][1];
		// return v;

	 //}
	 //vector<vector<int>>  matrix(int n,vector<vector<int>>&ans) {
		// //矩阵相乘
		// if (n == 1)return ans;
		// vector<vector<int>> r=matrix(n / 2, ans);
		// if (n % 2 == 0) {
		//	 return cheng(r, r);
		// }
		// else {
		//	 return cheng(cheng(r,r),ans);
		// }
	 //}
	//递归写快速幂
	 int f(int x ,int n) {
		 if (n == 1)return x;
		 int t = f(x,n / 2);
		 if (n % 2 == 0) {
			 return t * t;
		 }
		 else {
			 return t * t * x;
		 }
	 }
	 //迭代快速幂
	 int f2(int x, int n) {
		 int a = x;
		 int num = 1;
		 while(n>0){
			 if (n&1) {
				 num *= a;
			 }
			 a = a * a;
			 n >>= 1;

		 }
	 return num;
	 }
	 //快速幂求解斐波那契
	 int fin(int n) {
		 if (n == 0)return 0;
		 if (n == 1)return 1;
		 vector<vector<int>>ans(2, vector<int>(2,0));
		 ans[0][0] = 1;
		 ans[0][1] = 1;
		 ans[1][0] = 1;
		 ans[1][1] = 0;
		 vector<vector<int>>e(2, vector<int>(2, 0));
		 e[0][0] = 1;
		 e[1][1] = 1;
		 while (n>0) {
			 if (n & 1) {
				 e = matrix(ans,e);//累成
			 }
				ans = matrix(ans, ans);
				n >>= 1;
		 }
		 //取下
		 return pow(e);
	 }
	 int pow(vector<vector<int>>e) {
		 return e[1][0];
	 }
	 vector<vector<int>> matrix(vector<vector<int>>&a,vector<vector<int>>&b) {
		 vector<vector<int>> c{{0, 0}, { 0, 0 }};
		 for (int i = 0; i < 2; i++) {
			 for (int j = 0; j < 2; j++) {
				 c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
			 }
		 }
		 return c;

	 }
	
 };
 void test01() {
	 MyClass a;
	 /*int arr[6] = { 3,5,9,12,20,21 };
	 cout<<a.maxcover(10, arr);*/
	 /*for (int i = 0; i < 100; i++) {
		 cout << i<<"  ";
		 cout << a.putappdle(i) << endl;
	 }*/
	 /*for (int i = 0; i < 50; i++) {
		 cout << i << "   ";
		 cout << a.win1(i) << endl;
	 }*/
	 /*for (int i = 1; i < 40; i++) {
		 cout << i << " ";
		 cout << a.HelpClimaStairs(i) << endl;
	 }*/
	 //构建完全平方数
	 /*vector<int>v;
	 for (int i = 1; i < 10; i++) {
		 v.push_back(i * i);
	 }
	 for (int i = 1; i < 100; i++) {
		 cout << i << "  ";
		 cout << a.all(i, v) << endl;
	 }*/
	 /*int b[3] = {1,2,5};
	 vector<int> v(b,b+3);
	 vector<int>v2;
	 v2.push_back(2);
	 a.coinChange(v2, 1);*/
	 /*vector<vector<int>>grid;
	 vector<int>v;
	 v.push_back(0);
	 v.push_back(2);
	 grid.push_back(v);
	 a.orangesRotting(grid);*/
	 ////字符串的比较规则
	 //string s1;
	 //string s2;
	 //s1 = "abc";
	 //s2 = "w";
	 //if (s1 > s2) cout << "s1";
	 //else cout << "s2";
	 ////是先比较首字母
	 //最小高度树
	 //int n = 4;
	 //vector<vector<int>> v(3);
	 ///*v.reserve(4);*///使用reser申请的空间没有被初始化所以不能直接访问
	 //int m[3][2] = { {1, 0},{1, 2},{1, 3} };
	 //for (int i = 0; i < 3; i++) {
	 //	for (int j = 0; j < 2; j++) {
	 //		v[i].push_back(m[i][j]);
	 //	}
	 //}
	 //a.findMinHeightTrees(n, v);
	 /*vector<vector<char>>grad= { {'1', '1', '1', '1', '0'}, {'1', '1', '0', '1', '0'},{'1', '1', '0', '0', '0'},{'0', '0', '0', '0', '0'} };
	 grad[0][0] ='-1';
	 vector<char>g;
	 g.push_back('1');
	 g[0] = '0';
	 cout<<a.numIslands(grad);*/
	 /*vector<vector<int>>v = { {3,4,5},{3,2,6},{2,2,1} };
	 a.longestIncreasingPath(v);*/


 }
 class MY {
 public:
	 //求泰波那且数列
	 int tribonacci(int n) {
		 if (n == 0)return 0;
		 if (n == 1)return 1;
		 if (n == 2)return 2;
		 //滚动数组
		 int one = 0;
		 int two = 1;
		 int therr = 3;
		 int it = 0;
		 for (int i = 2; i < n; i++) {
			 it = one + two + therr;
			 one = two;
			 two = therr;
			 therr = it;
		 }
		 return therr;
	 }
	 //太波纳切数列快速幂
	 int tri(int n) {
		 if (n == 0)return 0;
		 if (n == 1)return 1;
		 if (n == 2)return 1;
		 vector<vector<int>>e(3, vector<int>(3, 0));
		 e[0][0] = 1;
		 e[1][1] = 1;
		 e[2][2] = 1;
		 vector<vector<int>>ans(3, vector<int>(3, 0));
		 ans[0][0] = 1;
		 ans[0][1] = 1;
		 ans[0][2] = 1;
		 ans[1][0] = 1;
		 ans[2][1] = 1;
		 while (n > 0) {
			 if (n & 1) {
				 e = matrix(ans,e);
			 }
			 ans = matrix(ans, ans);
			 n >>= 1;

		 }
		 return pow(e);
	 }
	 int pow(vector<vector<int>>e) {
		 return e[2][0] + e[2][1];
	 }
	 vector<vector<int>> matrix(vector<vector<int>>& a, vector<vector<int>>& b) {
		 vector<vector<int>>c(3, vector<int>(3, 0));
		 for (int i = 0; i < c.size(); i++) {
			 for (int j = 0; j < c[0].size(); j++) {
				 c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
			 }
		 }
		 return c;
	 }
	 //爬楼梯最小花费
	 // 贪心不能求得最小的花费
	 //int minCostClimbingStairs(vector<int>& cost) {
		// int num = 0;
		// helpcost(cost, cost.size(), num);
		// return num;
	 //}
	 //void  helpcost(vector<int>& cost, int len,int &num) {
		// if (len<=1) {
		//	 return;
		// }
		// if (cost[len - 1] < cost[len - 2]) {
		//	 //一个台阶
		//	 num += cost[len - 1];
		//	 helpcost(cost, len - 1, num);
		// }
		// else {
		//	 num += cost[len - 2];
		//	 helpcost(cost, len - 2, num);
		// }
	 //}
	 //使用向前更新滚动来实现最小花费
	 int minCostClimbingStairs(vector<int>& cost) {
		 int prvone=0;
		 int prvtwo=0;
		 int current;
		 for (int i = 2; i < cost.size()+1; i++) {
			 current = min(prvtwo+cost[i-1], prvone+cost[i-2]);
			 prvone = prvtwo;
			 prvtwo = current;
		 }
		 return prvtwo;
	 }
	 //
	 int dominantIndex(vector<int>& nums) {
		 int maxx = nums[0];
		 int maxxnum = 0;
		 bool ismaxx = true;
		 for (int i = 1; i < nums.size(); i++) {
			 if (ismaxx == true) {
				 if (nums[i] * 2 <= maxx) {
					 //还是最大
				 }
				 else {
					 if (nums[i] >= maxx * 2) {
						 maxx = nums[i];
						 maxxnum = i;
					 }
					 else {
						 maxx = nums[i] * 2;
						 maxxnum = i;
						 ismaxx = false;

					 }
				 }
			 }
			 else {
				 //假
				 if (nums[i] >= maxx) {
					 maxx = nums[i];
					 maxxnum = i;
					 ismaxx = true;
				 }
			 }

		 }
		 if (ismaxx == true) {
			 return maxxnum;
		 }
		 else {
			 return -1;
		 }
	 }
	 //数组最大点数
	 
	 int deleteAndEarn(vector<int>& nums) {
		 map<int,int>change;
		 //更新数组
		 int count=0;
		 for (int i = 0; i < nums.size();i++) {
			 int num = 0;
			 for (int j = 0; j < nums.size(); j++) {
				 if (nums[j] == nums[i] - 1 || nums[j] == nums[i] + 1) {
					 num += nums[j];
				 }
			 }
			 change.insert(pair<int,int>(i, num));
		 }
		 //建立好数组
		 while (!change.empty()) {
			 pair<int,int> minn(-1, INT_MAX);
			 for (auto it : change) {
				 if (it.second < minn.second) {
					 minn = it;
				 }
			 }
			 count += nums[minn.first];
			 //删除
			 change.erase(minn.first);
			 for (auto it : change) {

				 if (nums[it.first] == nums[minn.first] - 1 || nums[it.first] == nums[minn.first] + 1) {
					 change.erase(it.first);
				 }
			 }
		 }
		 return count;
	 }
	 //数字总和最小
	  int minPathSum(vector<vector<int>>&grid) {
		  for (int i = 0; i < grid.size(); i++) {
			  for (int j = 0; j < grid[0].size(); j++) {
				  if (i==0) {
					  grid[i][j] += grid[i][j - 1];
				  }if (j == 0) {
					  grid[i][j] += grid[i - 1][j];
				  }
				  else {
					  grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
				  }
			  }
		  }
		  return grid[grid.size() - 1][grid[0].size() - 1];

	 }
	  //拥有障碍物所有可能路径
	  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		  //使用动态规划
		  if (obstacleGrid[0][0] == 1)return 0;
		  int m = obstacleGrid.size();
		  int n = obstacleGrid[0].size();
		  bool is = false;
		  vector<vector<int>>r(m, vector<int>(n, 1));
		  //对横竖两行进行区分
		  bool find1 = false;
		  for (int i = 0; i < m; i++) {
			  if (obstacleGrid[i][0] == 1 || find1 == true) {
				  obstacleGrid[i][0] = 1;
				  find1 = true;
			  }
		  }
		  find1 = false;
		  for (int j = 0; j < n; j++) {
			  if (obstacleGrid[0][j] == 1 || find1 == true) {
				  obstacleGrid[0][j] = 1;
				  find1 = true;
			  }
		  }
		  for (int i = 1; i < m; i++) {
			  for (int j = 1; j < n; j++) {
				  //如果这个位置不是障碍物
				  if (obstacleGrid[i][j] == 0) {
						  if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] != 1) {
							  r[i][j] = r[i][j - 1];
						  }
						  else if (obstacleGrid[i - 1][j] != 1 && obstacleGrid[i][j - 1] == 1) {
							  r[i][j] = r[i - 1][j];
						  }
						  else if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] == 1) {
							  //加上标记代表这个位置不能达到
							  //达不到情况一
							  obstacleGrid[i][j] = 1;

						  }
						  else {
							  r[i][j] = r[i - 1][j] + r[i][j - 1];
						  }
				  }


			  }
		  }
		  if (obstacleGrid[m - 1][n - 1] == 1)return 0;
		  return r[m - 1][n - 1];
	  }
	  //int minimumTotal(vector<vector<int>>& triangle) {
		 // //新建一个存放最小路径的数组r
		 // int m = triangle.size();
		 // vector<vector<int>>r;
		 // for (int i = 0; i < m; i++) {
			//  int sizearr = triangle[i].size();
			//	  r.push_back(vector<int>(sizearr, 0));
		 // }
		 // //进行遍历
		 // for (int i = 0; i <m; i++) {
			//  for (int j = 0; j < triangle[i].size(); j++) {
			//	  //[i][j]访问
			//	  if (i == 0) {
			//		  r[0][0] = triangle[0][0];
			//	  }
			//	  else {
			//		  //不是顶点
			//		  
			//		  if (j == 0) {
			//			  //最左边
			//			  r[i][j] = r[i - 1][j] + triangle[i][j];
			//		  }
			//		  else  if (j == triangle[i].size() - 1) {
			//			  //最右边
			//			  r[i][j]= r[i - 1][j-1] + triangle[i][j];
			//		  }
			//		  else  {
			//			  //左右都有
			//			  r[i][j] = min(r[i - 1][j - 1], r[i - 1][j]) + triangle[i][j];
			//		  }
			//		  
			//		  

			//	  }
			//  }
		 // }
		 // //遍历最后层次选出最小值
		 // int mixx = INT_MAX;
		 // for (int j = 0; j < triangle[m - 1].size(); j++) {
			//  mixx = min(r[m - 1][j], mixx);
		 // }
		 // return mixx;
	  //}
	  int minimumTotal(vector<vector<int>>& triangle) {
		  //对动态规划进行空间简化
		  //倒着进行遍历可以只使用一个长度为n的空间
		  int m = triangle.size();
		  vector<int>r(triangle[m-1].size(), 0);
		  //最开头
		  r[0] = triangle[0][0];
		  for (int i = 1; i < m; i++) {
			  int n = triangle[i].size();
			  for (int j = triangle[i].size()-1; j >= 0; j--) {
				  //最后一一个
				  if (j == n-1) {
					  r[n - 1] = r[n - 2] + triangle[i][j];
				  }
				  else if (j> 0&&j<n-1) {
					  //中间
					  r[j] = min(r[j],r[j - 1]) + triangle[i][j];
				  }
				  else {
					  //最前
					  r[j] = r[0] + triangle[i][j];
				  }
			  }
		  }
		  int mixx = INT_MAX;
		  for (int i = 0; i < r.size(); i++) {
			  mixx = min(mixx, r[i]);
		  }
		  return mixx;
	  }
	  int uniquePaths(int m, int n) {
		  int cm = m + n - 2;
		  int cn = m - 1;
		  int ans = 1;
		  for (int i = 1; i <= cn; i++) {
			  ans *= (cm - i + 1.0) / i;
		  }
		  return ans;
	  }
	  //下降的最小路径和
	  int minFallingPathSum(vector<vector<int>>& matrix) {
		  //不空间优化来做
		  //最左和最有分开来算
		  //如果只有一列
		  int m = matrix.size();
		  int n = matrix[0].size();
		  int minn = INT_MAX;
		  if (n == 1) {
			  int num = 0;
			  for (int i = 0; i < m; i++) {
				  num += matrix[i][0];
			  }
			  return num;
		  }
		  for (int i = 1; i < m; i++) {
			  //最左边
			  matrix[i][0] = matrix[i][0] + min(matrix[i-1][0],matrix[i-1][1]);
			  //中间
			  for (int j = 1; j < n-1; j++) {
				  matrix[i][j] = matrix[i][j] + min({ matrix[i - 1][j - 1],matrix[i - 1][j],matrix[i - 1][j + 1] });
			  }
			  //最右边
			  matrix[i][n-1] = matrix[i][n-1] + min(matrix[i-1][n-1], matrix[i-1][n-2]);
		  }
		  for (int j = 0; j < n; j++) {
			  minn = min(minn, matrix[m - 1][j]);
		  }
		  return minn;
	  }
	  //只包含一的最大正方形
	  int maximalSquare(vector<vector<char>>& matrix) {
		  //对每一个1向下拓展
		  int m = matrix.size();
		  int n = matrix[0].size();
		  int maxsize = 0;
		  for (int i = 0; i < m; i++) {
			  for (int j = 0; j < n; j++) {
				  if (matrix[i][j] == '1') {
					  //拓展
					  //不能超出数组
					  int maxx = 1;
					  bool is = true;
					  for (int ip = i + 1, jp = j + 1; ip < m && jp < n && is; ip++, jp++) {
						  //检查是不是全是1
						  for (int icheck = i; icheck <=ip; icheck++) {
							  if (matrix[icheck][jp] == '0') {
								  is = false;
								  break;
							  }
						  }
						  for (int jcheck = j; jcheck <=jp && is; jcheck++) {
							  if (matrix[ip][jcheck] == '0') {
								  is = false;
								  break;
							  }
						  }
						  if (is == true)maxx++;
					  }
					  matrix[i][j] = maxx*maxx;
					  maxsize = max(int(matrix[i][j]), maxsize);
				  }
			  }
		  }
		  return maxsize;
	  }
 };

 void test02() {
	/* MY m;
	 vector<int>v = { 3, 4, 2 };
	 m.deleteAndEarn(v);*/
	 MY m;
 }
int main() {
	test02();
}
