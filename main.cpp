#include <iostream>
using namespace std;

int fibo(int);

int main(){
	int n;
	cout << "Hello World" << endl;
	cout << "Please input a number(10~20):";
	cin>>n;
	cout << "��" << n << "��쳲�������Ϊ��" << fibo(n) << endl;
	return 0;
}

int fibo(int n){
	int a = 0, b = 1;
	int idx = 1;
	while(idx++ <= n){
		b = a + b;
		a = b - a;
	}
	return a;
}
