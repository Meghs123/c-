/* create pair of int and string.
#include <iostream>

using namespace std;

int main()
{
    pair<int,string> p; //variable of pair is p.
   // p=make_pair(2,"abc"); //1st way to initialize pair.
      p={2,"abc"}; //2nd way to initialize pair.
      //pair<int,string> p1=p; //creating copy of p i.e copy of p is in p1.
       pair<int,string> &p1=p; //reference.
       p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    
    int a[]={1,2,3};
    int b[]={4,5,6};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}
*/


#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    cin>>p.first;
    cout<<p.first;
}
