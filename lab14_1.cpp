#include<iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;

	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " d : " << x << endl;
	cout << " e : " << (int*)y << endl;
	cout << " f : " << z << endl;

	cout << "&a : " << &a << endl;
	cout << "&b : " << (int*)&b << endl;
	cout << "&c : " << (int*)&c << endl;
	cout << "&d : " << &x << endl;
	cout << "&e : " << &y << endl;
	cout << "&f : " << &z << endl;

	c = 'F';
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << (int*)y << endl;
	cout << " z : " << z << endl;

	*y = 'W';
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << (int*)y << endl;
	cout << " z : " << z << endl;

	*x = 6;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << (int*)y << endl;
	cout << " z : " << z << endl;

	**z = 7;
	cout << " a : " << a << endl;
	cout << " b : " << b << endl;
	cout << " c : " << c << endl;
	cout << " x : " << x << endl;
	cout << " y : " << (int*)y << endl;
	cout << " z : " << z << endl;


	return 0;
}
