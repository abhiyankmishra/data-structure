// there are two copy constructors 1]default copy constructor:this  uses shallow copy(only copies the pointers of the copied constructor)
//                                 2]our made copy constructor:this  uses deep copy (copies the pointers of the copied constructor as well as the location where these pointers are pointing)
// 

#include <iostream>

using namespace std;
class test
{     int age;
   public:
     string name;
  test()
  {
      cout<<"default constructor";
  }
    test(int ag,string nam)//parms constructor
    {
        age=ag;
        name=nam;
    }
    test(test &p)
    {
        age=p.age;
        name=p.name;
    }
    
    ~test()
    {
        cout<<"into destructor\n";
    }
    
    void print()
    {
        cout<<name<<age<<endl;
    }
    
    void setage(int ag)
    {
        age=ag;
    }
    
   bool operator +(test &z)
    {
        if(name==z.name && age==z.age)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    test x;
    cout<<endl;
    
    test p(34,"abbra");
    p.print();
    cout<<endl;
    
    test z=p;
    z.print();
    
    if(z+p)
    {
        cout<<"same\n";
    }
    else 
    {
        cout<<"not same\n";
    }
// test t;
// t.name="abhi";
// t.setage(78);
// t.print();
// // cout<<t.name<<t.age;




// test a[3];
// for(int i=0;i<3;i++)
// {int ag;
// cout<<"name";
//  cin>>a[i].name ;
//  cout<<"\nage";
//  cin>>ag;
//  a[i].setage(ag);
// }

// for(int i=0;i<3;i++)
// {
//     a[i].print();
// }

    return 0;
}
