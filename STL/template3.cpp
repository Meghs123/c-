//Template class with default parameters.
#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Megha{
    public:
    T1 a;
    T2 b;
    T3 c;
    Megha(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of b is "<<c<<endl;
    }

};
int main()
{
    Megha<> h(4,6.4,'c'); //int,float,char(default params)
    h.display();
    cout<<endl;
    Megha<float, char,char> g(4.1,'u','c');
    g.display();
    cout<<endl;
    Megha<float, char,char> i('c','u','c');
    i.display();
    return 0;
}