#include<iostream>

using namespace std;

template <class Type1, class Type2> class myclass
{
	Type1 i;
	Type2 j;
public:
	myclass(Type1 a, Type2 b) { i = a ; j = b;}
	void show() { cout << "i = "<<i <<" j ="<<j; }
};

int main() {
	myclass<int ,double> ob1(10,20.5);
	myclass<char, char *> ob2('X', "Templates add power.");

	ob1.show();
	ob1.show();

	return 0;

}