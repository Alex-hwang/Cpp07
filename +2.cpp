#include<iostream>
using namespace std;

//声明B1类
class B1 {
public:
	B1(int i) {//构造函数
		cout << "constructing B1" << i << endl;
	}
	~B1() {//析构函数
		cout << "destructing B1" << endl;
	}
};

//声明B2类
class B2 {
public:
	B2() {//构造函数
		cout << "constructing B3 *" << endl;
	}
	~B2() {//析构函数
		cout << "destructing B3" << endl;
	}
};

//声明C类
class C :public B2, virtual public B1 {//继承B2和B1类
	int j;
public:
	C(int a, int b, int c) :B1(a), memberB1(b), j(c) {//构造函数
	}
private:
	B1 memberB1;
	B2 memberB2;
};

int main() {
	C obj(1, 2, 3);
	return 0;
}
//创建obj对象时，调用B1的构造函数输出constructing B11
//然后调用B2的构造函数输出constructing B3 *
//之后C的成员初始化调用B1构造函数，传入参数2，输出constructing B12
//之后调用B2构造函数，输出constructing B3*
//析构函数与调用顺序相反