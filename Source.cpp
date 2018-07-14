#include <iostream>
#include <cmath>
#include <clocale>
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <cstdlib>

using namespace std;


class complex
{

public:
	int a,
		b;
	void display();
	void insert();
	complex operator+(complex c2);
	complex operator-(complex c2);
	complex operator*(complex c2);
};

void complex::display() {
	cout << a;
	if (b < 0) {
		cout << b << "i"<< endl;
	}
	else {
		cout << " + " << b << "i" << endl;
	}
}

void complex::insert()
{
	cout << "Enter real & not real chast'(cherez probel)" << endl;
	cin >>a >> b;
}

complex complex::operator+(complex c2) {
	complex c1 = *this, c;
	c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
	return c;
}

complex complex::operator-(complex c2) {
	complex c1 = *this, c;
	c.a = c1.a - c2.a;
	c.b = c1.b - c2.b;
	return c;
}

complex complex:: operator*(complex c2)
{
	complex c1 = *this, c;
	c.a = c1.a*c2.a - c1.b*c2.b;
	c.b = c1.a*c2.b + c1.b*c2.a;
	return c;
}
int main()
{
	complex a, b, c;
	cout << "slojenie" << endl;
	a.insert();
	cout << "Enter second chislo" << endl;
	b.insert();
	c = a + b;
	cout<<"Result:"<<endl;
	c.display();
	cout << "---------------------------------" << endl;

	cout << "vychitanie" << endl;
	a.insert();
	cout << "Enter second chislo" << endl;
	b.insert();
	c = a - b;
	cout << "Result:" << endl;
	c.display();
	cout << "---------------------------------" << endl;

	cout << "ymnojenie" << endl;
	a.insert();
	cout << "Enter second chislo" << endl;
	b.insert();
	c = a * b;
	cout << "Result:" << endl;
	c.display();
	cout << "---------------------------------" << endl;
	system("pause");

	return 0;
	
}


