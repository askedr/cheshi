#include "��ͷ.h"
using namespace std;
class Trie {
	//�ֵ���ʵ���ַ����Ĳ���ɾ��
private:
	//���Ƕ��
	bool IsEnd;
	Trie* next[26];
public:
	Trie() {
		IsEnd = false;
		memset(next, 0, sizeof(next));//ȫ�����൱�ڿ�
	}
	//�������
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
	//����
	bool search(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return node->IsEnd;
	}
	//����ǰ׺
	bool startsWith(string word) {
		Trie* node = this;
		for (char i : word) {
			if (node->next[i - 'a'] == NULL)return false;
			node = node->next[i - 'a'];
		}
		return true;
	}

};
//���ش������ٵ�
//����ʹ�ü���8���͵Ĵ���
//�������ʧ��
// ����һ��8���ʹ���
// ʹ6���͵Ĵ��Ӳ�ѭ��
// �ڳ���ʱ������ǰ�˳�
// ʣ�����24ֹͣ����󹫱���
// 
// 
//
//���Ӹ��ǽڵ�����
class MyClass
{
public:
	//Ĭ������
	
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
		 return (n == 1 || n == 3) ? "����": "����";

	 }
	 //�ݹ�
	 int base = 1;//����
	 while (base<=n) {
		 //���ֳԵ�base��
	 }
	}
 //װƻ������
 //������С������
 int putappdle(int  apple) {
	 //ȥ�ų��������
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
 //������С������
 int apple02(int apple) {
	 //���ɴ�18��ʼÿʮ��Ϊһ��ѭ��
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
	 //�����ų��������
	 //���ɴӿ�ʼ��ѭ�Ⱥ����Ⱥ�
	 if (n == 1)return"����";
	 if (n == 2)return "����";
	 if (n == 3)return "����";
	 if (n == 4)return "����";

	 int base = 1;
	 int test;
	 while (base<=n) {
		 test = n - base;
		 if (win1(test) == "����") {
			 return "����";
		 }
		 else {
				 base = base * 4;
		 }

	 }
	 return "����";
 }
 string win02(int n) {
	 if (n % 5 == 0 || n % 5 == 2)return "����";
	 return "����";
 }
 //��¥�ݵݹ�ʵ��
 int count = 0;
 
 int ClimbStairs(int n) {
	 count = 0;
	 return count;
	 

 }
 int HelpClimaStairs(int n) {
	 //��ֵ�����ϸ�������
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
 //����������������Ļ������
 //���ȱ�������
 //�жϱ�����������
 //��¼�Ƿ��Ѿ�������
 //��������������
 bool inArea(vector<vector<int>>grid, int r, int c) {
	 //�ж��Ƿ���������
	 return 0 <= r && r < grid.size() && 0 <= c && grid[0].size();
 }
 void dfs(vector<vector<int>>grid, int r, int c) {
	 if (!inArea(grid, r, c))return;
	 if (grid[r][c] !=1) {
		 return;
	 }
	 else {
		 grid[r][c] = 2;
		 //�������ܽڵ�
		 dfs(grid, r-1, c);
		 dfs(grid, r +1, c);
		 dfs(grid, r, c-1);
		 dfs(grid, r, c+1);

	 }
 }
 //��ȫƽ����
 //����һ�����Ž�
 int all(int n, vector<int>v) {
	 if (n == 0)return 0;
	 int min = 1;
	 vector<int>c;
	 //��¼��ǰ������Сֵ
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
 //��Ǯ
 int coinChange(vector<int>& coins, int amount) {
	 vector<int>v(amount+1);
	 //����
	 v[0] = 0;
	 //���ȸ�ֵ��Ǯ��Ӧ��λ��
	 for (int j = 0; j < coins.size(); j++) {
		 v[coins[j]] = 1;
	 }
	 for (int i = 1; i <= amount; i++) {
		 //������Ǯ����
		 if (v[i] == 1) {
			 continue;
		 }
		int minn = INT_MAX;
		bool ju = false;
		 for (int j = 0;j<coins.size();j++ ){
			 if (i - coins[j] <= 0) {
				 continue;
			 }//����
			 if (v[i - coins[j]] == -1) {
				 continue;
			 }
			 ju = true;
			 minn = min(minn, v[i - coins[j]]);//�������
		 }
		 if (ju)v[i] = minn+1;
		 else v[i] =-1;

	 }
	 return v[amount];
 }
 //����ƴ��
 bool wordBreak(string s, vector<string>& wordDict) {
	 //��ֳ�һ��������
	 //ֱ�ӱ���,ȥ�ҵ�һ������
	 string current;

	 
 }
 bool inArr(vector<vector<int>>& grid, int x, int y) {
	 return 0 <= x && x < grid[0].size() && 0 <= y && y < grid.size();
 }
 int orangesRotting(vector<vector<int>>& grid) {
	 int mine = -1;
	 int count = 0;
	 queue<pair<int, int>>q;//���ڹ������
	 //�ҵ�ȫ������
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
			 //�����������ҵ�����
			 if (inArr(grid, current.first - 1, current.second)) {
				 if (grid[current.first - 1][current.second] == 1) {
					 count--;
					 grid[current.first - 1][current.second] = 2;//����
					 q.push({ current.first - 1,current.second });

				 }
			 }
			 if (inArr(grid, current.first + 1, current.second)) {
				 if (grid[current.first + 1][current.second] == 1) {
					 count--;
					 grid[current.first + 1][current.second] = 2;//����
					 q.push({ current.first + 1,current.second });

				 }


			 }
			 if (inArr(grid, current.first, current.second - 1)) {
				 if (grid[current.first][current.second - 1] == 1) {
					 count--;
					 grid[current.first][current.second - 1] = 2;//����
					 q.push({ current.first,current.second - 1 });

				 }


			 }
			 if (inArr(grid, current.first, current.second + 1)) {
				 if (grid[current.first][current.second + 1] == 1) {
					 count--;
					 grid[current.first][current.second + 1] = 2;//����
					 q.push({ current.first,current.second + 1 });

				 }


			 }

		 }
	 }
	 if (count == 0)return mine;
	 return -1;

 }
 //������С�߶���
 //���ڵ�һ��ȷ������С�߶���ȷ��
 vector<int>r;
 int findMinHeightTreeshelp(int ver,vector<vector<int>> ve) {
	 
	 //��߶�
	 //��Ϊ��������ֻ���ж��ǲ��Ǵ���һ���ڵ������ľ���
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
	 vector<int>re;//������
	 //��¼�����������ʽ
	 vector<vector<int>> ve(n);
	 //ע�������˳��
	 for (int i = 0; i < edges.size(); i++) {
		 //��ֵ
		 ve[edges[i][0]].push_back(edges[i][1]);
		 ve[edges[i][1]].push_back(edges[i][0]);
	 }
	 //����ÿһ���ڵ����ε�����
	 //��ȥ��߶�
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
 //���������������
 //�ж��Ƿ�Խ��
 bool inArr(vector<vector<char>>& grid,int i,int j) {
	 return 0 <= i && i < grid.size() && 0 <= j && j < grid[0].size();
 }
 int numIslands(vector<vector<char>>& grid) {
	 //��ÿһ��δ����¼����½�صĽڵ���й�����Ȳ��Ҽ�¼����
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
				 //��������ʹ��һ������ʹ��ѭ��
				 for (int n = 0; n < 4; n++) {
					 pair<int, int>curnext = current;
					 curnext.first += bfs_i[n];
					 curnext.second += bfs_j[n];
					 //�ж��Ƿ�Խ��
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

 
 //��С�������ز������󷨣�����ȥ������Ϊһ�Ľڵ�
 vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
	 //����ת����һ���ڽӾ���
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
	 //�ó�����Ϊ��Ľڵ���Ϊ-1
	 //�����������Ĺ������
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
		 //���ϲ��
		 int size = vertex.size();
		 while (size>0) {
			 int current = vertex.front();
			 vertex.pop();
			 size--;
			 //�������
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
 //����������·��
 //Ѱ�����·����¼��һ�������������·����������ȥ����
 //·�������ظ�
 //��ÿһ���ڵ������·��
 //�������
 //�½�һ���������ÿ��Ԫ�����·������С���в����ظ�
 //֤���˲��������ظ�
 //
 bool PassIt(int i, int j,int nexti,int nextj,vector<vector<int>>maxtrix) {
	 //�����沢�ұ�ԭ�ȴ�
	 if (0 <= nexti && nexti < maxtrix.size() && 0 <= nextj && nextj < maxtrix[0].size()) {//û�г���
		 if (maxtrix[i][j] < maxtrix[nexti][nextj]) {
			 return true;
		 }
	 }
	 return false;
 }
 void dfs(int i, int j, vector<vector<int>>maxtrix, vector<vector<int>>& maxpath,vector<vector<bool>>val) {
	 //һ�����������ȷ���������·��
	 val[i][j] = true;
	 //��������
	 int ne_i[] = { 0,0,1,-1 };
	 int ne_j[] = { 1,-1,0,0 };
	 int maxx = 1;
	 for (int c = 0; c < 4; c++) {
		 if (PassIt(i,j,i + ne_i[c], j + ne_j[c],maxtrix)) {
			 if (maxpath[i + ne_i[c]][j + ne_j[c]] == 0) {
				 //δ����¼
				 maxpath[i + ne_i[c]][j + ne_j[c]] = 1;
				 dfs(i + ne_i[c], j + ne_j[c], maxtrix, maxpath, val);
				 //�Ѿ���¼
				 maxx = max(maxpath[i + ne_i[c]][j + ne_j[c]] + 1, maxx);//�����������ֵ
			 }
			 else {
				 maxx = max(maxpath[i + ne_i[c]][j + ne_j[c]] + 1, maxx);//�����������ֵ
			 }
		 }
	 }
	 maxpath[i][j] = maxx;

 }
 void longpath(int i, int j, vector<vector<int>>matrix, vector<vector<int>>& maxpath) {
	 //�������
	 //��¼��¼�ڵ�
	 vector<vector<bool>>val;
	 vector<bool>pat;
	 pat.resize(matrix[0].size(), false);
	 val.resize(matrix.size(), pat);
	 pat.clear();
	 vector<bool>().swap(pat);
	 //�������
	 dfs(i, j, matrix, maxpath, val);//�Ѿ����������·������

 }
 int longestIncreasingPath(vector<vector<int>>& matrix) {
	 vector<vector<int>>maxpath;//������·��������0�����Ѿ�����¼
	 vector<int>pat;
	 pat.resize(matrix[0].size(), 0);
	 maxpath.resize(matrix.size(),pat);
	 pat.clear();
	 vector<int>().swap(pat);
	 //��������
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
	 //������������������
	 //���뽨�������ؽڵ�
	 TreeNode* Helpbuild(int agin, int end,vector<int>& preorder, vector<int>& inorder) {
		 //�����Գ�
		 if (agin == end) {
			 //û������
			 TreeNode* t = new(TreeNode);
			 t->val = preorder[agin];
			 return t;
		 }
		 if (end < agin) {
			 //û�и�
			 return NULL;
		 }
		 TreeNode* t = new(TreeNode);
		 t->val = preorder[agin];
		 //Ѱ�����һ��и�
		 int i = agin+1;
		 int j = agin;
		 bool it = true;
		 if (preorder[i] != inorder[j]) {
			 //û������
			 it = false;
		 }
		 else {
			 for (; i<preorder.size() && preorder[i] == inorder[j]; j++, i++) {

			 }
		 }
		 if (i <= end) {
			 //������
			 t->right = Helpbuild(i, end, preorder, inorder);
		 }
		 //���һ��ʼ�Ͳ���ȴ���û������
		 if (it == true) {
			 t->left = Helpbuild(agin + 1, i - 1, preorder, inorder);
		 }//��������
		//�������ڵ�
			 return t;
	 }
	 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		 //�ݹ飿
		 return Helpbuild(0, preorder.size()-1,preorder, inorder);
		 //��������������ͬǰ׺
		 //int i = 0;
		 //int j = 0;
		 //
		 //for (; i < preorder.size();i++) {
			// //�½�һ���ڵ�
			// TreeNode* t=new(TreeNode);
			// t->val = preorder[i];
			// for (j = i; preorder[i] != inorder[j]; i++) {//����һ������
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
	 ////ͨ���������д쳲�����
	 ////�������
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
		// //�����������
		// vector<vector<int>> v(2,vector<int>(2,0));
		// v[0][0] = b[0][0] * a[0][0] + b[1][0] * a[0][1];
		// v[0][1] = b[0][1] * a[0][0] + b[1][1] * a[0][1];
		// v[1][0] = b[0][0] * a[1][0] + b[1][0] * a[1][1];
		// v[1][1] = b[0][1] * a[1][0] + b[1][1] * a[1][1];
		// return v;

	 //}
	 //vector<vector<int>>  matrix(int n,vector<vector<int>>&ans) {
		// //�������
		// if (n == 1)return ans;
		// vector<vector<int>> r=matrix(n / 2, ans);
		// if (n % 2 == 0) {
		//	 return cheng(r, r);
		// }
		// else {
		//	 return cheng(cheng(r,r),ans);
		// }
	 //}
	//�ݹ�д������
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
	 //����������
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
	 //���������쳲�����
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
				 e = matrix(ans,e);//�۳�
			 }
				ans = matrix(ans, ans);
				n >>= 1;
		 }
		 //ȡ��
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
	 //������ȫƽ����
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
	 ////�ַ����ıȽϹ���
	 //string s1;
	 //string s2;
	 //s1 = "abc";
	 //s2 = "w";
	 //if (s1 > s2) cout << "s1";
	 //else cout << "s2";
	 ////���ȱȽ�����ĸ
	 //��С�߶���
	 //int n = 4;
	 //vector<vector<int>> v(3);
	 ///*v.reserve(4);*///ʹ��reser����Ŀռ�û�б���ʼ�����Բ���ֱ�ӷ���
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
	 //��̩����������
	 int tribonacci(int n) {
		 if (n == 0)return 0;
		 if (n == 1)return 1;
		 if (n == 2)return 2;
		 //��������
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
	 //̫���������п�����
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
	 //��¥����С����
	 // ̰�Ĳ��������С�Ļ���
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
		//	 //һ��̨��
		//	 num += cost[len - 1];
		//	 helpcost(cost, len - 1, num);
		// }
		// else {
		//	 num += cost[len - 2];
		//	 helpcost(cost, len - 2, num);
		// }
	 //}
	 //ʹ����ǰ���¹�����ʵ����С����
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
					 //�������
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
				 //��
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
	 //����������
	 
	 int deleteAndEarn(vector<int>& nums) {
		 map<int,int>change;
		 //��������
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
		 //����������
		 while (!change.empty()) {
			 pair<int,int> minn(-1, INT_MAX);
			 for (auto it : change) {
				 if (it.second < minn.second) {
					 minn = it;
				 }
			 }
			 count += nums[minn.first];
			 //ɾ��
			 change.erase(minn.first);
			 for (auto it : change) {

				 if (nums[it.first] == nums[minn.first] - 1 || nums[it.first] == nums[minn.first] + 1) {
					 change.erase(it.first);
				 }
			 }
		 }
		 return count;
	 }
	 //�����ܺ���С
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
	  //ӵ���ϰ������п���·��
	  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		  //ʹ�ö�̬�滮
		  if (obstacleGrid[0][0] == 1)return 0;
		  int m = obstacleGrid.size();
		  int n = obstacleGrid[0].size();
		  bool is = false;
		  vector<vector<int>>r(m, vector<int>(n, 1));
		  //�Ժ������н�������
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
				  //������λ�ò����ϰ���
				  if (obstacleGrid[i][j] == 0) {
						  if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] != 1) {
							  r[i][j] = r[i][j - 1];
						  }
						  else if (obstacleGrid[i - 1][j] != 1 && obstacleGrid[i][j - 1] == 1) {
							  r[i][j] = r[i - 1][j];
						  }
						  else if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] == 1) {
							  //���ϱ�Ǵ������λ�ò��ܴﵽ
							  //�ﲻ�����һ
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
		 // //�½�һ�������С·��������r
		 // int m = triangle.size();
		 // vector<vector<int>>r;
		 // for (int i = 0; i < m; i++) {
			//  int sizearr = triangle[i].size();
			//	  r.push_back(vector<int>(sizearr, 0));
		 // }
		 // //���б���
		 // for (int i = 0; i <m; i++) {
			//  for (int j = 0; j < triangle[i].size(); j++) {
			//	  //[i][j]����
			//	  if (i == 0) {
			//		  r[0][0] = triangle[0][0];
			//	  }
			//	  else {
			//		  //���Ƕ���
			//		  
			//		  if (j == 0) {
			//			  //�����
			//			  r[i][j] = r[i - 1][j] + triangle[i][j];
			//		  }
			//		  else  if (j == triangle[i].size() - 1) {
			//			  //���ұ�
			//			  r[i][j]= r[i - 1][j-1] + triangle[i][j];
			//		  }
			//		  else  {
			//			  //���Ҷ���
			//			  r[i][j] = min(r[i - 1][j - 1], r[i - 1][j]) + triangle[i][j];
			//		  }
			//		  
			//		  

			//	  }
			//  }
		 // }
		 // //���������ѡ����Сֵ
		 // int mixx = INT_MAX;
		 // for (int j = 0; j < triangle[m - 1].size(); j++) {
			//  mixx = min(r[m - 1][j], mixx);
		 // }
		 // return mixx;
	  //}
	  int minimumTotal(vector<vector<int>>& triangle) {
		  //�Զ�̬�滮���пռ��
		  //���Ž��б�������ֻʹ��һ������Ϊn�Ŀռ�
		  int m = triangle.size();
		  vector<int>r(triangle[m-1].size(), 0);
		  //�ͷ
		  r[0] = triangle[0][0];
		  for (int i = 1; i < m; i++) {
			  int n = triangle[i].size();
			  for (int j = triangle[i].size()-1; j >= 0; j--) {
				  //���һһ��
				  if (j == n-1) {
					  r[n - 1] = r[n - 2] + triangle[i][j];
				  }
				  else if (j> 0&&j<n-1) {
					  //�м�
					  r[j] = min(r[j],r[j - 1]) + triangle[i][j];
				  }
				  else {
					  //��ǰ
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
	  //�½�����С·����
	  int minFallingPathSum(vector<vector<int>>& matrix) {
		  //���ռ��Ż�����
		  //��������зֿ�����
		  //���ֻ��һ��
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
			  //�����
			  matrix[i][0] = matrix[i][0] + min(matrix[i-1][0],matrix[i-1][1]);
			  //�м�
			  for (int j = 1; j < n-1; j++) {
				  matrix[i][j] = matrix[i][j] + min({ matrix[i - 1][j - 1],matrix[i - 1][j],matrix[i - 1][j + 1] });
			  }
			  //���ұ�
			  matrix[i][n-1] = matrix[i][n-1] + min(matrix[i-1][n-1], matrix[i-1][n-2]);
		  }
		  for (int j = 0; j < n; j++) {
			  minn = min(minn, matrix[m - 1][j]);
		  }
		  return minn;
	  }
	  //ֻ����һ�����������
	  int maximalSquare(vector<vector<char>>& matrix) {
		  //��ÿһ��1������չ
		  int m = matrix.size();
		  int n = matrix[0].size();
		  int maxsize = 0;
		  for (int i = 0; i < m; i++) {
			  for (int j = 0; j < n; j++) {
				  if (matrix[i][j] == '1') {
					  //��չ
					  //���ܳ�������
					  int maxx = 1;
					  bool is = true;
					  for (int ip = i + 1, jp = j + 1; ip < m && jp < n && is; ip++, jp++) {
						  //����ǲ���ȫ��1
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
	 //vector<vector<char>>v = { {'1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1'}, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' }, { '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1' } };
	 m.maximalSquare(v);
 }
int main() {
	test02();
}