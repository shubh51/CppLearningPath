// Online C++ compiler to run C++ program online
#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    // Write C++ code here
    forward_list<int> flist1 = {10,30,60,20,15};
    forward_list<int> flist2;
    flist2.assign({1,2,3,4,5});
   
   cout<<"Displaying first list elements "<<endl;
   for(auto &x : flist1)
   {
       cout<<x<<"  ";
   }
   cout<<endl;
   cout<<"Displaying Second list elements "<<endl;
   for(auto &x : flist2)
   {
       cout<<x<<"  ";
   }
   flist1.push_front(5);
   flist1.emplace_front(4);
   
   flist1.pop_front();
  
   cout<<endl;
   cout<<"Displaying first list elements after popping up front element  "<<endl;
   for(auto &x : flist1)
   {
       cout<<x<<"  ";
   }
    return 0;
}
