#include"��ͷ.h"
using namespace std;
class Solution {
public:
    //�����������
    vector<vector<int>>edge;
    vector<int>v;//��¼�Ƿ���ʹ�
    vector<int>induity;//���
    vector<int>pr;//��¼�����˳��
    bool ju = true;
    void dfs(int i) {
        //���
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
        //���Ƚ����ڽӱ�
        edge.resize(numCourses);
        v.resize(numCourses, 0);
        induity.resize(numCourses, 0);
        for (auto it : prerequisites) {
            edge[it[1]].push_back(it[0]);
            ++induity[it[0]];
        }
        //���������Ϊ��Ľڵ�
        //���߿��Բ������ֱ�ӱ������нڵ�
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
    //ʹ�ù������
    vector<int>indity;//�����
    vector<vector<int>>edge;
    //����Ҫ���
    queue<int>s;
    vector<int>pr;
    bool ju = true;
    int num = 0;//����
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //��ʼ��
        edge.resize(numCourses);
        indity.resize(numCourses, 0);
        for (auto it : prerequisites) {
            edge[it[1]].push_back(it[0]);
            ++indity[it[0]];
        }
        //Ѱ�����Ϊ��ڵ�
        //���в��
        for (int i = 0; i < numCourses; i++) {
            if (indity[i] == 0) {
                s.push(i);
            }
        }
        while (!s.empty()) {
            int size = s.size();
            //size�������εı��ⲻ��Ҫ���
            while (size > 0) {
                int r = s.front();;
                s.pop();
                size--;
                //�������
                pr.push_back(r);
                //ͬʱ�������
                for (auto it : edge[r]) {
                    indity[it]--;

                    if (indity[it] == 0) {
                        //���
                        s.push(it);
                    }
                }
                //��ջ


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
    //�������
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
    //�������
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
