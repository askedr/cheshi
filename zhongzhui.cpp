#include "��ͷ.h"
using namespace std;
//ʹ��ջ�����׺��ֵ
// ��λ����
// ���#��
//������ʽ
//��������ʽ����
string CinExpressin() {
	string e;
	cin >> e;
	return e;
}
//ʶ���ǲ�������
bool IsData(char e) {
	if ('0' <= e&&e <= '9')  return true;
	else return false;
}
//ʵ��ת��
int Conversion(char c) {
	switch (c)
	{case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case '0':
		return 0;
	default:
		break;
	}
}
//ʵ������
int Operat(stack<float>&data,stack<char>&sign) {
	float a;
	float b;
	b = data.top();
	data.pop();
	a = data.top();
	data.pop();
	if (sign.top() == '-') {
		sign.pop();
		return a - b;
	}
	else if (sign.top() == '+') {
		sign.pop();
		return a + b;
	}
	else if (sign.top() == '*') {
		sign.pop();
		return a * b;
	}
	else if (sign.top() == '/') {
		sign.pop();
		return a / b;
	}
}
//ʵ�����ȼ��Ƚ�
bool Bigger(char a, char b) {
	if (b == '(' || b == ')') {
		return false;
	}
	else
		if (a == '/' && b == '-') {
			return true;
		}
		else if (a == '/' && b == '+') {
			return true;
		}
		else if (a == '*' && b == '+') {
			return true;
		}
		else if (a == '*' && b == '-') {
			return true;
		}
		else {
			return false;
		}
}
//ʵ�ַ�����ջ
void SignPush(stack<float>&data,stack<char>&sign, char e) {
	//�ж��Ƿ��ǣ�ֱ����ջ
	if (e == '(') {
		//��ջ
		sign.push(e);
	}
	else if (e == ')') {
		//ʵ������ֱ���������汻������
		while (sign.top()!='(') {
			data.push(Operat(data, sign));
		}
		sign.pop();
		
	}
	//ʵ�ַ�����ջ
	else if (!IsData(e)) {
		//���бȽ�
		if (!sign.empty() && Bigger(sign.top(), e)) {
			//������
			data.push(Operat(data, sign));
			
		}
		//����
		sign.push(e);
	}
}
//ʵ����ֵ����
int AriExpressin(string e) {
	//����ջ
	stack<float>data;
	stack<char>sign;
	
	//����
	
	for (int i = 0; e[i]!='#';) {
		//ʵ�����ݻ��Ƿ��ŵ��ж�
		//��λ���ֺϳ�һ����Ž�data
		float wei=0;
		if (IsData(e[i])) {//ʡ����
			while (IsData(e[i])) {

				//ת����int��
				wei *= 10;
				wei += Conversion(e[i]);
				i++;
			}
			//������ջ
			data.push(wei);
		}
		//������ջ
		if (e[i] != '#') {
			//ʵ��������
			SignPush(data, sign, e[i]);
			i++;
		}
		
		
		

	}
	//�ﵽ���
	//ʵ������
	for (; sign.empty() != true;) {
		data.push(Operat(data, sign));
	}
	//��������
	return data.top();
}
//����
void test01() {
	string e=CinExpressin();
	cout<<AriExpressin(e);
	
	
}
void test02() {
	char e = '+';
	if ('0' <= e <= '9') {
		cout << "sh";
	}
	else {
		cout << "ii";
	}
}
int main() {
	test01();
}