#include"标头.h"
using namespace std;
class Solution {
public:
    //深度优先搜索
    vector<vector<int>>edge;
    vector<int>v;//记录是否访问过
    vector<int>induity;//入度
    vector<int>pr;//记录是输出顺序
    bool ju = true;
    void dfs(int i) {
        //标记
        v[i] = 1;
        for (auto it : edge[i]) {
            if (v[it] == 0) {
                dfs(it);
                if (ju == false)return;

            }
            else if (v[it] == 1) {
                ju = false;

                return;
            }

        }
        v[i] = 2;
        pr.push_back(i);

    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //首先建立邻接表
        edge.resize(numCourses);
        v.resize(numCourses, 0);
        induity.resize(numCourses, 0);
        for (auto it : prerequisites) {
            edge[it[1]].push_back(it[0]);
            ++induity[it[0]];
        }
        //仅遍历入度为零的节点
        //或者可以不管入度直接遍历所有节点
        for (int i = 0; i < numCourses; i++) {
            if (induity[i] == 0) {
                dfs(i);
            }

        }
        if (ju == false) {
            vector<int>().swap(pr);
            return {};

        }

        reverse(pr.begin(), pr.end());
        return pr;





    }
};

class Solution2 {
public:
    //使用广度优先
    vector<int>indity;//放入度
    vector<vector<int>>edge;
    //不需要标记
    queue<int>s;
    vector<int>pr;
    bool ju = true;
    int num = 0;//计数
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //初始化
        edge.resize(numCourses);
        indity.resize(numCourses, 0);
        for (auto it : prerequisites) {
            edge[it[1]].push_back(it[0]);
            ++indity[it[0]];
        }
        //寻找入度为零节点
        //得有层次
        for (int i = 0; i < numCourses; i++) {
            if (indity[i] == 0) {
                s.push(i);
            }
        }
        while (!s.empty()) {
            int size = s.size();
            //size是输出层次的本题不需要层次
            while (size > 0) {
                int r = s.front();;
                s.pop();
                size--;
                //进入输出
                pr.push_back(r);
                //同时更新入度
                for (auto it : edge[r]) {
                    indity[it]--;

                    if (indity[it] == 0) {
                        //入队
                        s.push(it);
                    }
                }
                //进栈


            }
        }
        if (pr.size() != numCourses)return {};
        else return pr;
    }
};
void test01() {
    int num = 4;
    vector<vector<int>>p;
    p.resize(5);
    p[0].push_back(1);
    p[0].push_back(0);
    p[1].push_back(2);
    p[1].push_back(0);
    p[2].push_back(1);
    p[2].push_back(3);
    p[3].push_back(3);
    p[3].push_back(2);
    p[4].push_back(2);
    p[4].push_back(1);
    //检查输入
    cout << "[";
    for (int i = 0; i < 5; i++) {
        cout << "[";
        for (int j = 0; j < 2; j++) {
            cout << p[i][j];
        }
        cout << "]";
    }
    cout << "]";
    Solution s;
    vector<int>w = s.findOrder(num, p);
    cout << w[1];
}
void test02() {
    int num = 2;
    vector<vector<int>>p;
    p.resize(1);
    p[0].push_back(1);
    p[0].push_back(0);
    //检查输入
    /*cout << "[";
    for (int i = 0; i < 1; i++) {
        cout << "[";
        for (int j = 0; j < 2; j++) {
            cout << p[i][j];
        }
        cout << "]";
    }
    cout << "]";*/
    Solution2 s;
    s.findOrder(num, p);


}
int main() {
    test02();

}
