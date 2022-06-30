#include<iostream>
using namespace std;


int main()
{
	int a = 10;
	int* ptr;
	ptr = &a;			// &a give the address pf variable a
	cout << "Value of Ptr is  ::" << ptr;
	cout << "\nAddress of a variable is  :: " << &a;
	cout << "\nvalue of *ptr is " << *ptr;
	cout << "\nValue of a :: " << a;

	*ptr = 20;		// it also update value of a

	cout << "\vUpdate value of *Ptr :: " << *ptr;
	cout << "\nValue of a is :: " << a;

	// if we change the value of ptr we redirect ptr to other valiable 
	//let see how we update ptr

	int b;
	ptr = &b;
	b = 23;
	cout << "\nNow ptr is refering toward b " << *ptr;
}
