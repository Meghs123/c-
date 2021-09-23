//virtual function

/*#include<iostream>
using namespace std;
class Base{
	public:
		void fun()
		{
			cout<<"Hello base class";
		}
};
class Derived: public Base{
	public:
		void fun()
		{
			cout<<"Hello derived class";
		}
};
int main()
{
	Derived d;
	d.fun();
	
}*/

/*#include<iostream>
using namespace std;
class Base{
	public:
		void fun()
		{
			cout<<"Hello base class";
		}
};
class Derived: public Base{
	public:
		void fun()
		{
			cout<<"Hello derived class";
		}
};
int main()
{
	Derived d;
	Base *p=&d;  //function is called based on pointer(p), not object
	p->fun();
}*/

#include<iostream>
using namespace std;
class Base{
	public:
		virtual void fun()
		{
			cout<<"Hello base class";
		}
};
class Derived: public Base{
	public:
		void fun()
		{
			cout<<"Hello derived class";
		}
};
int main()
{
	Derived d;
	Base *p=&d;  //function is called based on pointer(p), not object
	p->fun();
}
