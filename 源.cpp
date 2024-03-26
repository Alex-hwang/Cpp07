#include<iostream>
using namespace std;

class TT {
public:
	TT(int n = 0, int d = 1);
	void print();
	TT Div(TT& r1, TT& r2);
private:
	int N, D;
};

TT TT::Div(TT& r1, TT& r2) {
	return TT(r1.N / r2.D + r1.D / r2.N, r1.D / r2.D);
}
TT::TT(int n, int d) {
	N = n;
	D = d;
}
void TT::print() {
	cout << "N=" << N << " D=" << D << endl;
}
void main() {
	TT a(1, 2), b(3, 4), c;
	c = c.Div(a, b);
	c.print();
}