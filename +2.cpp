#include<iostream>
using namespace std;

//����B1��
class B1 {
public:
	B1(int i) {//���캯��
		cout << "constructing B1" << i << endl;
	}
	~B1() {//��������
		cout << "destructing B1" << endl;
	}
};

//����B2��
class B2 {
public:
	B2() {//���캯��
		cout << "constructing B3 *" << endl;
	}
	~B2() {//��������
		cout << "destructing B3" << endl;
	}
};

//����C��
class C :public B2, virtual public B1 {//�̳�B2��B1��
	int j;
public:
	C(int a, int b, int c) :B1(a), memberB1(b), j(c) {//���캯��
	}
private:
	B1 memberB1;
	B2 memberB2;
};

int main() {
	C obj(1, 2, 3);
	return 0;
}
//����obj����ʱ������B1�Ĺ��캯�����constructing B11
//Ȼ�����B2�Ĺ��캯�����constructing B3 *
//֮��C�ĳ�Ա��ʼ������B1���캯�����������2�����constructing B12
//֮�����B2���캯�������constructing B3*
//�������������˳���෴