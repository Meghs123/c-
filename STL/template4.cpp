#include<iostream>
using namespace std;

template <class T>
class Megha{
    public:
    T data;
    Megha(T a){
        data=a;
    }
    void display();
    // void display(){
    //     cout<<data;
    // }
};

template <class T>
void Megha<T>:: display(){
    cout<<data;
}
//function template
void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
} 

template <class T>
void func(T a)
{
    cout<<"I am tempatised func() "<<a<<endl;
} 

template <class T>
void func1(T a)
{
    cout<<"I am tempatised func1() "<<a<<endl;
} 
int main()
{
    //Megha<float> h(5.7);
    //Megha<int> h(5);
    // Megha<char> h('c');
    // cout<<h.data<<endl;
    // h.display();
    // return 0;
    func(4);  //Exact match takes the highest priority.
    func1(4);
    return 0;
}