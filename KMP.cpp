#include "��ͷ.h"
//ʵ��kmp�㷨
//û��������������
bool ju(char* m, char z[]) {
	//���Ƚ���next���飻
	int next[20];//���������鳤�����
	//��ֵnext
	int max = 0;
	int i=0;
	while(i<6) {
		if (i == 0) {
			next[0] = max;
			i++;
		}else if (z[i] == z[max]) {
			max++;
			next[i] = max;
			i++;
		}
		else {
			if (max == 0) {
				next[i] = 0;
				i++;
			}
			else
				max = next[max-1];

		}
	}
	//��ʼ�Ƚ�
	for (int i = 0, j = 0;i<9; j++,i++) {
		if (m[i] != z[j]) {
			//����ָ��i
			if (j == 0) {

			}else
			j = next[j-1];
		}
		if (j == 5)return true;
	}
	
	return false;
}
int main() {
	char m[] = { 'q','e','c','a','b','c','a','b','b'};
	char z[] = { 'a','b','c','a','b','b' };
     bool t=ju(m, z);
}