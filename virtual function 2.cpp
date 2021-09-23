//virtual function 2

/*#include<iostream>
using namespace std;
class BaseCar{
	public:
		void fun()
		{
			cout<<"Helllo base class";
		}
		
};
class DerivedCar:public BaseCar{
	public:
		void fun()
		{
			cout<<"Hello derived class";
		}
	
};
int main()
{
	BaseCar *p=new DerivedCar() ; //pointer of base class and object of derivedcar
	p->fun();
}*/

#include<iostream>
using namespace std;
class BaseCar{
	public:
		virtual void fun()
		{
			cout<<"Helllo base class";
		}
		
};
class DerivedCar:public BaseCar{
	public:
		void fun()
		{
			cout<<"Hello derived class";
		}
	
};
int main()
{
	BaseCar *p=new DerivedCar() ; //pointer of base class and object of derivedcar
	p->fun();
}
