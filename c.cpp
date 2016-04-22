// c.cpp : 定义控制台应用程序的入口点。
//

#include <iosream>

using namespace std;

class Complex{
public:
	Complex(){ real = 0; imag = 0 ; }

	Complex(double r, double i){real = r ; imag = i;}

	Complex complex_add(Complex &c2);

	Complex operator +(Complex& c2);

	friend void display(Complex a);

	void display();

private:

	double real;

	double imag;
};
Complex Complex::operator +(Complex& c2)
{
	Complex c ;

	c.real = real + c2.real;

	c.imag = imag + c2.imag;

	

	return c;
}
Complex Complex::complex_add(Complex &c2)
{
	Complex c ;

	c.real = real + c2.real;

	c.imag = imag + c2.imag;

	return c;

}

void Complex::display()
{
	cout << "(" << real  << ","  << imag<< "i)"<< endl;
}
void display(Complex a)
{
	cout << a.real;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Complex c1(3,4),c2(5,-10),c3;

	c3 =c1+c2;

	cout << "c1 = "; c1.display();

	cout << "c2 = "; c2.display();

	cout << "c1 + c2 ="; c3.display();

	display(c3);
	return 0;
}

