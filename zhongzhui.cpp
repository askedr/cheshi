#include "标头.h"
using namespace std;
//使用栈完成中缀求值
// 多位数据
// 最后#号
//输入表达式
//不会检查表达式错误
string CinExpressin() {
	string e;
	cin >> e;
	return e;
}
//识别是不是数据
bool IsData(char e) {
	if ('0' <= e&&e <= '9')  return true;
	else return false;
}
//实现转换
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
//实现运算
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
//实现优先级比较
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
//实现符号入栈
void SignPush(stack<float>&data,stack<char>&sign, char e) {
	//判断是否是（直接入栈
	if (e == '(') {
		//入栈
		sign.push(e);
	}
	else if (e == ')') {
		//实现运算直到括号里面被遍历完
		while (sign.top()!='(') {
			data.push(Operat(data, sign));
		}
		sign.pop();
		
	}
	//实现符号入栈
	else if (!IsData(e)) {
		//进行比较
		if (!sign.empty() && Bigger(sign.top(), e)) {
			//先运算
			data.push(Operat(data, sign));
			
		}
		//插入
		sign.push(e);
	}
}
//实现求值函数
int AriExpressin(string e) {
	//创建栈
	stack<float>data;
	stack<char>sign;
	
	//输入
	
	for (int i = 0; e[i]!='#';) {
		//实现数据还是符号的判断
		//多位数字合成一个存放进data
		float wei=0;
		if (IsData(e[i])) {//省不了
			while (IsData(e[i])) {

				//转换成int型
				wei *= 10;
				wei += Conversion(e[i]);
				i++;
			}
			//进数据栈
			data.push(wei);
		}
		//符号入栈
		if (e[i] != '#') {
			//实现了运算
			SignPush(data, sign, e[i]);
			i++;
		}
		
		
		

	}
	//达到最后
	//实现运算
	for (; sign.empty() != true;) {
		data.push(Operat(data, sign));
	}
	//输出最后结果
	return data.top();
}
//测试
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