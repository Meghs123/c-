/* Vectors are also continuous memory block. It is dynamic in nature.
#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i) //It will give the current size of v(v.size). Time complexity of v.size() is O(1).
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //int a[10]; //memory is allocated and now size cannot be changed.
    vector<int> v; //memory is not allocated yet size can be changed.
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printvec(v); //To check it vector is dynamic in nature.
        v.push_back(x); //time complexity of push_back is O(1).
    }
    printvec(v);
}
*/

/*Vectors are also continuous memory block. It is dynamic in nature.
#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i) //It will give the current size of v(v.size). Time complexity of v.size() is O(1).
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}
int main()
{
    //int a[10]; //memory is allocated and now size cannot be changed.
    vector<int> v;
    //vector<int> v(5); //vector of size 5 is declared.
    //vector<int> v(5,3);
    v.push_back(7); //add elements in the last.
    v.push_back(8);
   // printvec(v);
    //v.pop_back(); //Removes the last element. Time complexity O(1).
    //printvec(v);
    
    vector<int> v2=v; //v2 is copy of v, if v2 is changed there is no change in v. Time complexity O(n).
    vector<int> &v2=v; //v is also changed.
    v2.push_back(5);
    printvec(v);
    printvec(v);
    printvec(v2);
}*/

//Vectors are also continuous memory block. It is dynamic in nature.
#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<string> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i) //It will give the current size of v(v.size). Time complexity of v.size() is O(1).
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    printvec(v);
    
}
